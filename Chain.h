#ifndef BLOCKCHAIN_H
#define BLOCKCHAIN_H

#include<iostream>
#include<vector>
#include<string>
#include<memory>
#include "Blockchain"


class BlockChain{
	public:
		BlockChain(int genesis =1);
		Block getBlock(int index);
		int getNumOfBlock(void);
		string getLatestBlockhash(void);
		
		private:
			vector<unique_ptr<Block>> blockchain;
};

BlockChain::BlockChain(int genesis)
{
	if(genesis==0)
	{
		vector<string> v;
		v.push_back("Genesis Block!");
		auto hash_nonce_pair=findHash();
		
	}
	
}

//fetch the Block

Block BlockChain::getBlock(int index)
{
	for(int i=0;i<=blockchain.size();i++)
	{
		if(blockchain[i]->getIndex()==index)
		{
			return *(blockchain[i]);
		}
	}
	throw invalid_argument("index does not exists");
}

//return no of block

int BlockChain::getNumOfBlock(void)
{
	return this->blockchain.size();
}

//return the hash of the latest block

string BlockChain::getLatestBlockhash(void)
{
	return this->blockchain[blockchain.size()-1]->getHash();
}
