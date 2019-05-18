#include<iostream>
#include<string>
#include<vector>
using namespace std;
main()
{
	
}

class Block
{
	private :
		int index;
		string previousHash;
		string hash;
		string timestamp;
		vector<string> data;
	public:
	Block(int index,string timestamp,vector<string> data,string hash,string previousHash)
	{
		this->index=index;
		this->timestamp=timestamp;
		this->data=data;
		this->hash=hash;
		this->previousHash=previousHash;
	}
	int getIndex(void);
	string getHash(void);
	string getPreviousHash(void);
	string getTimestamp(void);
	vector<string> getData(void);
};

int Block::index(void)
{
	return this->index;
}

string Block::getTimestamp(void)

{
	return this->timestamp;
}


string Block::getHash(void)
{
	return this->hash;
}


string Block::getPreviousHash(void)
{
	return this->previousHash;
}


vector<string> Block::getData(void)
{
	return this->getData;
}


