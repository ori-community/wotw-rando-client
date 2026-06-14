#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RBTree_1_K_TreePage_System_Int32_.h>
#include <Modloader/app/structs/RBTree_1_System_Int32_.h>

namespace app::classes::System::Data::RBTree_1_K__TreePage_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02FAF2F0, void, ctor, app::RBTree_1_K_TreePage_System_Int32_* this_ptr, int32_t size)
    IL2CPP_REGISTER_METHOD(0x02FAF3F0, int32_t, AllocSlot, app::RBTree_1_K_TreePage_System_Int32_* this_ptr, app::RBTree_1_System_Int32_* tree)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_InUseCount, app::RBTree_1_K_TreePage_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1E0, void, set_InUseCount, app::RBTree_1_K_TreePage_System_Int32_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00529E80, int32_t, get_PageId, app::RBTree_1_K_TreePage_System_Int32_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529E90, void, set_PageId, app::RBTree_1_K_TreePage_System_Int32_* this_ptr, int32_t value)
} // namespace app::classes::System::Data::RBTree_1_K__TreePage_System_Int32_
