#include "make_lib.h"
int main(int argc,char** argv)
{
    MY_CONF::CMyconf conf("./data/my.conf");
    TRIM_REDUNT::Trim_redunt* trim=TRIM_REDUNT::Trim_redunt::getInstance(conf);
    trim->make_page_lib("./data/复旦文本分类测试语料","my_page_lib");//生成网页库，写入磁盘
    trim->make_page_content_index("my_content_index");//生成网页内容索引,写入磁盘
	trim->get_page_content_index();		//读取网页内容索引
	trim->make_page_title_abstract();	//生成网页标题、摘要索引，存于内存p_ta_index,但并未写入磁盘
	trim->get_doc_num();
	trim->remv_dup("new_page_lib");
    //trim->make_page_index("content_index");
    //trim->get_page_content_index();
    //trim->get_page_index();
    //trim->get_doc_num();
    //std::vector<std::string> content;
    //trim->get_content_by_doc_id(6531,content);
    //std::cout<<"title: "<<content[0];
    //std::cout<<"abstract: "<<content[1];
    //std::cout<<"content:  "<<content[2];
    //trim->make_page_title_abstract();
    //trim->remv_dup("new_page_lib");
	return 0;
}
