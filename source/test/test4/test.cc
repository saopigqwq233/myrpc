#include"../../common/detail.hpp"
#include"../../common/fields.hpp"
// 测试uuid函数
void testuuid(){
    std::string uuid1 = bitrpc::UUID::uuid();
    std::cout << "uuid: " << uuid1 << std::endl;
    std::string uuid2 = bitrpc::UUID::uuid();
    std::cout << "uuid: " << uuid2 << std::endl;
}
// 测试Json类
void testjson(){
    Json::Value val;
    val["name"] = "bitrpc";
    val["version"] = "1.0.0";
    std::string body;
    bool ret = bitrpc::JSON::serialize(val, body);
    if (ret)
    {
        std::cout << "json serialize success!" << std::endl;
        std::cout << "json body: " <<std::endl<< body << std::endl;
    }
    else
    {
        std::cout << "json serialize failed!" << std::endl;
    }
}

// 

int main(){
    testuuid();
    testjson();
    return 0;
}
