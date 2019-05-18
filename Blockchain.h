#include<iostream>
#include<string>
#include<vector>
using namespace std;
/*main()
{
	
}*/

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
	
	void toString(void);
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
	return this->data;
}

//See the Block Data

void Block::toString(void)
{
	string datastring;
	for(int i=0;i<data.size();i++)
	{
		datastring +=data[i]+",";
	}
	
	printf("\n:::::::::::::::::::::::::::\n");
	printf("Block%d\n hash%s\n previous has%s\n Data :%s",index,this->hash.c_str(),this->previousHash.c_str(),datastring.c_str());
	printf("\n:::::::::::::::::::::::::::\n");
}


string calculateHash()
{
	string hash=applySha256(previousHash+data);
	return hash;
}
