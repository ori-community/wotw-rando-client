#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataRowCollection_DataRowTree.h>
#include <Modloader/app/structs/DataRow.h>

namespace app::classes::System::Data::DataRowCollection_DataRowTree {
    IL2CPP_REGISTER_METHOD(0x017E11B0, void, ctor, (app::DataRowCollection_DataRowTree * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017E1250, int32_t, CompareNode, (app::DataRowCollection_DataRowTree * this_ptr, app::DataRow* record1, app::DataRow* record2))
    IL2CPP_REGISTER_METHOD(0x017E1290, int32_t, CompareSateliteTreeNode, (app::DataRowCollection_DataRowTree * this_ptr, app::DataRow* record1, app::DataRow* record2))
} // namespace app::classes::System::Data::DataRowCollection_DataRowTree
