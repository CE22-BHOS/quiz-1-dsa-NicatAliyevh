float averageOfValues(Node* head){
    float sum = 0;
    float len = 0;
    while(head != NULL){
        sum += (float)head->val;
        len ++;
        head = head->next;
    }
    return sum / len;
}