#include <iostream>
#include <glog/logging.h>
int main(int argc, char ** argv){
	google::InitGoogleLogging(argv[0]);
    google::SetLogDestination(google::GLOG_INFO, "log_chifoumi");
	std::cout << "Hello World !" << std::endl;
	LOG(INFO) << "Test log Hello World";
	return 0;
}
