#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RBTree_1_K_RBTreeEnumerator_System_Int32___Boxed.h>
#include <Modloader/app/structs/RBTree_1_System_Int32_.h>

namespace app::classes::System::Data::RBTree_1_K__RBTreeEnumerator_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x00115920, int32_t, get_Current, app::RBTree_1_K_RBTreeEnumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0023FC80, bool, MoveNext, app::RBTree_1_K_RBTreeEnumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0023FC70,
        void,
        ctor_1,
        app::RBTree_1_K_RBTreeEnumerator_System_Int32___Boxed* this_ptr,
        app::RBTree_1_System_Int32_* tree,
        int32_t position
    )
    IL2CPP_REGISTER_METHOD(0x0023FC40, void, ctor_2, app::RBTree_1_K_RBTreeEnumerator_System_Int32___Boxed* this_ptr, app::RBTree_1_System_Int32_* tree)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::RBTree_1_K_RBTreeEnumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0023FC90, app::Object*, IEnumerator_get_Current, app::RBTree_1_K_RBTreeEnumerator_System_Int32___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0023FD10, void, IEnumerator_Reset, app::RBTree_1_K_RBTreeEnumerator_System_Int32___Boxed* this_ptr)
} // namespace app::classes::System::Data::RBTree_1_K__RBTreeEnumerator_System_Int32_
