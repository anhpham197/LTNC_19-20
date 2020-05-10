Source: Teacher Catcd


// Question 1
void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *node = head;
    while (node) {
        cout << node->data << endl;
        node = node->next;
    }
}

// Question 2
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data);

    if (!head) {
        head = node;
    } else {
        SinglyLinkedListNode *p = head;
        while (p->next) {
            p = p->next;
        }
        p->next = node;
    }
    return head;
}

// Question 3
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data);
    node->next = llist;

    return node;
}

// Question 4
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data);

    if (position == 0) {
        node->next = head;
        head = node;
    } else {
        SinglyLinkedListNode *p = head;
        while (--position) {
            p = p->next;
        }
        node->next = p->next;
        p->next = node;
    }
    return head;
}

// Question 5
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if (position == 0) {
        SinglyLinkedListNode *node = head;
        head = head->next;
        delete node;
    } else {
        SinglyLinkedListNode *p = head;
        while (--position) {
            p = p->next;
        }
        SinglyLinkedListNode *node = p->next;
        p->next = p->next->next;
        delete node;
    }
    return head;
}

// Question 6
void reversePrint(SinglyLinkedListNode* head) { 
    if (head->next) {
        reversePrint(head->next); 
    }
 
    cout << head->data << endl;  
}

// Question 7
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *node = head; 
    SinglyLinkedListNode *prev = NULL, *next = NULL; 

    while(node) { 
        next = node->next;
        node->next = prev;
        prev = node; 
        node = next; 
    } 
    return prev; 
}

// Question 8
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *p1 = head1, *p2 = head2;
    while(p1 || p2) {
        if (!p1 || !p2 || p1->data != p2->data) {
            return false;
        }
        p1 = p1->next;
        p2 = p2->next;
    }

    return true;
}

// Question 9
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    // in-place algorithm
    if (!head1) {
        return head2; 
    } else if (!head2) {
        return head1; 
    }

    if (head1->data < head2->data) { 
        head1->next = mergeLists(head1->next, head2); 
        return head1; 
    } else { 
        head2->next = mergeLists(head1, head2->next); 
        return head2; 
    } 
}

// Question 10
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode *node = head, *result = head;
    while (positionFromTail--) {
        node = node->next;
    }

    while (node->next) {
        node = node->next;
        result = result->next;
    }

    return result->data;
}

// Question 11
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* p = head;

    while (p) {
        while (p->next!=NULL && p->data==p->next->data) {
            p->next = p->next->next;
        }
        p = p->next;
    }
    return head;
}

// Question 12
bool has_cycle(SinglyLinkedListNode* head) {
    if (!head) {
        return false;
    }
    
    SinglyLinkedListNode *slow = head;
    SinglyLinkedListNode *fast = head->next;
    while(fast!=NULL && fast->next!=NULL) {
        slow = slow->next;
        fast = fast->next->next;
        
        if(fast == slow){
            return true;
        }
    }
    
    return false;
}

// Question 13
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *p1 = head1, *p2 = head2;

    while (p1!=p2) {
        if (!p1->next){
            p1 = head2;
        } else {
            p1 = p1->next;
        }

        if(!p2->next){
            p2 = head1;
        } else {
            p2 = p2->next;
        }
    }
    return p2->data;
}

// Question 14
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode *node = new DoublyLinkedListNode(data);

    if (!head) {
        head = node;
    } else if (data < head->data){
        node->next = head;
        head->prev = node;
        head = node;
    } else {
        head->next = sortedInsert(head->next, data);
        head->next->prev = head;
    }
    return head;
}

// Question 15
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    if (!head) {
        return head;
    }

    DoublyLinkedListNode *node = head, *prev = NULL;
    while(node) { 
        node->prev = node->next;
        node->next = prev;
        prev = node;
        node = node->prev;
    } 
    return prev; 
}
