#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_ServerObject_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_ServerObject_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ServerObject.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_ServerObject_ {
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_UnityEngine_GameObject_ServerObject_* this_ptr,
        app::GameObject* key,
        app::ServerObject* value
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_UnityEngine_GameObject_ServerObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::ServerObject*, get_Item, app::Dictionary_2_UnityEngine_GameObject_ServerObject_* this_ptr, app::GameObject* key)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_ServerObject_,
        GetEnumerator,
        app::Dictionary_2_UnityEngine_GameObject_ServerObject_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UnityEngine_GameObject_ServerObject_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_ServerObject_
