#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Collider_System_Single_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Collider_System_Single_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Collider_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UnityEngine_Collider_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0283B900, void, Clear, app::Dictionary_2_UnityEngine_Collider_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Collider_System_Single_,
        GetEnumerator,
        app::Dictionary_2_UnityEngine_Collider_System_Single_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02E7A6F0, bool, Remove, app::Dictionary_2_UnityEngine_Collider_System_Single_* this_ptr, app::Collider* key)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_UnityEngine_Collider_System_Single_* this_ptr, app::Collider* key)
    IL2CPP_REGISTER_METHOD(0x02BBBD40, void, set_Item, app::Dictionary_2_UnityEngine_Collider_System_Single_* this_ptr, app::Collider* key, float value)
    IL2CPP_REGISTER_METHOD(0x02BBBD70, void, Add, app::Dictionary_2_UnityEngine_Collider_System_Single_* this_ptr, app::Collider* key, float value)
    IL2CPP_REGISTER_METHOD(0x02E78EF0, float, get_Item, app::Dictionary_2_UnityEngine_Collider_System_Single_* this_ptr, app::Collider* key)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Collider_System_Single_
