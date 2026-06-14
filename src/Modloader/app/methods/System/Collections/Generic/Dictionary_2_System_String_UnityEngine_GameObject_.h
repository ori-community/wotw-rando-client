#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_UnityEngine_GameObject_ {
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_System_String_UnityEngine_GameObject_* this_ptr,
        app::String* key,
        app::GameObject** value
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC140,
        void,
        set_Item,
        app::Dictionary_2_System_String_UnityEngine_GameObject_* this_ptr,
        app::String* key,
        app::GameObject* value
    )
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_System_String_UnityEngine_GameObject_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_UnityEngine_GameObject_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_UnityEngine_GameObject_
