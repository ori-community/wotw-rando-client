#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Object_System_Boolean_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Object_System_Boolean_.h>
#include <Modloader/app/structs/Object_1.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Object_System_Boolean_ {
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_UnityEngine_Object_System_Boolean_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, app::Dictionary_2_UnityEngine_Object_System_Boolean_* this_ptr, app::Object_1* key, bool value)
    IL2CPP_REGISTER_METHOD(0x02BC0B40, bool, Remove, app::Dictionary_2_UnityEngine_Object_System_Boolean_* this_ptr, app::Object_1* key)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, app::Dictionary_2_UnityEngine_Object_System_Boolean_* this_ptr, app::Object_1* key, bool value)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Object_System_Boolean_,
        GetEnumerator,
        app::Dictionary_2_UnityEngine_Object_System_Boolean_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UnityEngine_Object_System_Boolean_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Object_System_Boolean_
