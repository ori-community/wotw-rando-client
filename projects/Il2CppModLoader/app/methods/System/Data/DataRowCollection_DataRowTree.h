#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Data::DataRowCollection_DataRowTree {
    IL2CPP_REGISTER_METHOD(0x017E11B0, void, ctor, (app::DataRowCollection_DataRowTree * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E1250, int32_t, CompareNode, (app::DataRowCollection_DataRowTree * this_ptr, app::DataRow * record1, app::DataRow * record2))
    IL2CPP_REGISTER_METHODINFO(0x047485A0, DataRowCollection_DataRowTree_CompareNode__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017E1290, int32_t, CompareSateliteTreeNode, (app::DataRowCollection_DataRowTree * this_ptr, app::DataRow * record1, app::DataRow * record2))
    IL2CPP_REGISTER_METHODINFO(0x0475B510, DataRowCollection_DataRowTree_CompareSateliteTreeNode__MethodInfo)
}
