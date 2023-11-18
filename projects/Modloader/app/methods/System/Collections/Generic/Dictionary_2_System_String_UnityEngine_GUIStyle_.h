#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_UnityEngine_GUIStyle_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle_.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/IEqualityComparer_1_System_String_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_UnityEngine_GUIStyle_ {
    IL2CPP_REGISTER_METHOD(0x0283AC50, void, ctor, (app::Dictionary_2_System_String_UnityEngine_GUIStyle_ * this_ptr, app::IEqualityComparer_1_System_String_* comparer))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_UnityEngine_GUIStyle_ * this_ptr, app::String* key, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_UnityEngine_GUIStyle_ * this_ptr, app::String* key, app::GUIStyle** value))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_String_UnityEngine_GUIStyle_*, get_Values, (app::Dictionary_2_System_String_UnityEngine_GUIStyle_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_UnityEngine_GUIStyle_
