/* TrieNode.h */ 
/* 2022.06.25 Norman Graham */ 

#ifndef __TRIE_NODE_H___
#define __TRIE_NODE_H___

class spTrieNode { 
  public: 
   unsigned char ch; 
   unsigned char CountNext; 
   spTrieNode **Next; 
  spTrieNode(): ch(0), CountNext(0), Next(nullptr) { 
  };
  spTrieNode( unsigned char nch) : ch(nch), CountNext(0), Next(nullptr) {
  }; 
  bool addChild( unsigned char ch ) { 
    unsigned short i; 
    for ( i=0; i<CountNext; i++) {
         if ( Next[i]->ch == ch ) 
           return false;
    }
    spTrieNode * toadd  spTrieNode(ch ); 
 
    spTrieNode **tmp = new spTrieNode *[CountNext+1]; 
    if ( CountNext ) { 
        memcpy(tmp, Next, CountNext);
    } 
    tmp[CountNext] = toadd; 
    if ( Next ) 
         delete [] Next; 
     Next = tmp; 
  }; 
    
}; 
  

#endif
