#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RBTree_1_K_RBTreeEnumerator_System_Object___Boxed.h>
#include <Modloader/app/structs/RBTree_1_System_Object_.h>

namespace app::classes::System::Data::RBTree_1_K__RBTreeEnumerator_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00107C30, app::Object*, get_Current, app::RBTree_1_K_RBTreeEnumerator_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0023FF80, app::Object*, IEnumerator_get_Current, app::RBTree_1_K_RBTreeEnumerator_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0023FDE0, void, ctor_1, app::RBTree_1_K_RBTreeEnumerator_System_Object___Boxed* this_ptr, app::RBTree_1_System_Object_* tree)
    IL2CPP_REGISTER_METHOD(
        0x0023FE20,
        void,
        ctor_2,
        app::RBTree_1_K_RBTreeEnumerator_System_Object___Boxed* this_ptr,
        app::RBTree_1_System_Object_* tree,
        int32_t position
    )
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::RBTree_1_K_RBTreeEnumerator_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0023FF70, bool, MoveNext, app::RBTree_1_K_RBTreeEnumerator_System_Object___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0023FFB0, void, IEnumerator_Reset, app::RBTree_1_K_RBTreeEnumerator_System_Object___Boxed* this_ptr)
} // namespace app::classes::System::Data::RBTree_1_K__RBTreeEnumerator_System_Object_
