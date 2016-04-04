class qnode{
	public:
	int data;
	qnode *next;
	qnode(){
		data = -1;
		next = NULL;
	}
};

class queue{
	qnode *head;
	public:
	queue(){
		head = NULL;
	}
	void addQueue(int);
	int delQueue();
};

void queue::addQueue(int data){
	qnode *newNode;
	newNode = new qnode();
	newNode->data = data;
	newNode->next = NULL;
	if(head == NULL)
		head = newNode;
	else{
		qnode *temp;
		temp = head;
		while(temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
}

int queue::delQueue(){
	if(head == NULL)
		return -1;
	else{
		qnode *temp;
		int data;
		temp = head;
		data = head->data;
		head = head->next;
		free(temp);
		return data;
	}

}
			
