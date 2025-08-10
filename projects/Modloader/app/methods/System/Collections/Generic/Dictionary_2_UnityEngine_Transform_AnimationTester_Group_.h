#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationTester_Group.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Transform_AnimationTester_Group_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Transform_AnimationTester_Group_.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Transform_AnimationTester_Group_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_UnityEngine_Transform_AnimationTester_Group_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_UnityEngine_Transform_AnimationTester_Group_* this_ptr,
        app::Transform* key,
        app::AnimationTester_Group* value
    )
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_UnityEngine_Transform_AnimationTester_Group_* this_ptr, app::Transform* key)
    IL2CPP_REGISTER_METHOD(
        0x02BD24D0,
        app::AnimationTester_Group*,
        get_Item,
        app::Dictionary_2_UnityEngine_Transform_AnimationTester_Group_* this_ptr,
        app::Transform* key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Transform_AnimationTester_Group_,
        GetEnumerator,
        app::Dictionary_2_UnityEngine_Transform_AnimationTester_Group_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Transform_AnimationTester_Group_
