#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_UnityEngine_AnimatorClipInfo_.h>
#include <Modloader/app/structs/AnimatorClipInfo.h>
#include <Modloader/app/structs/AnimatorClipInfo__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_AnimatorClipInfo_ {
    IL2CPP_REGISTER_METHOD(0x01CD1020, bool, Equals_1, (app::ObjectEqualityComparer_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::AnimatorClipInfo x, app::AnimatorClipInfo y))
    IL2CPP_REGISTER_METHOD(0x01CD10D0, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::AnimatorClipInfo obj))
    IL2CPP_REGISTER_METHOD(0x01CD1130, int32_t, IndexOf, (app::ObjectEqualityComparer_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::AnimatorClipInfo__Array* array, app::AnimatorClipInfo value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CD12A0, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::AnimatorClipInfo__Array* array, app::AnimatorClipInfo value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_UnityEngine_AnimatorClipInfo_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_UnityEngine_AnimatorClipInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_UnityEngine_AnimatorClipInfo_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_AnimatorClipInfo_
