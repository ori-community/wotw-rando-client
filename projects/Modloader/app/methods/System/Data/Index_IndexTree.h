#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Index_IndexTree.h>
#include <Modloader/app/structs/Index.h>

namespace app::classes::System::Data::Index_IndexTree {
    IL2CPP_REGISTER_METHOD(0x01E3F860, void, ctor, (app::Index_IndexTree * this_ptr, app::Index* index))
    IL2CPP_REGISTER_METHOD(0x01E3F920, int32_t, CompareNode, (app::Index_IndexTree * this_ptr, int32_t record1, int32_t record2))
    IL2CPP_REGISTER_METHOD(0x01E3F940, int32_t, CompareSateliteTreeNode, (app::Index_IndexTree * this_ptr, int32_t record1, int32_t record2))
} // namespace app::classes::System::Data::Index_IndexTree
