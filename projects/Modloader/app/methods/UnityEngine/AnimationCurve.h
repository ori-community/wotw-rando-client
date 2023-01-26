#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Keyframe.h>
#include <Modloader/app/structs/Keyframe__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WrapMode__Enum.h>

namespace app::classes::UnityEngine::AnimationCurve {
    IL2CPP_REGISTER_METHOD(0x02419990, void, ctor_1, (app::AnimationCurve * this_ptr, app::Keyframe__Array* keys))
    IL2CPP_REGISTER_METHOD(0x024199F0, void, ctor_2, (app::AnimationCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02419A50, void, Internal_Destroy, (void* ptr))
    IL2CPP_REGISTER_METHOD(0x02419AA0, void*, Internal_Create, (app::Keyframe__Array * keys))
    IL2CPP_REGISTER_METHOD(0x02419AF0, bool, Internal_Equals, (app::AnimationCurve * this_ptr, void* other))
    IL2CPP_REGISTER_METHOD(0x02419B50, void, Finalize, (app::AnimationCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02419C10, float, Evaluate, (app::AnimationCurve * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x02419C70, app::Keyframe__Array*, get_keys, (app::AnimationCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02419CC0, void, set_keys, (app::AnimationCurve * this_ptr, app::Keyframe__Array* value))
    IL2CPP_REGISTER_METHOD(0x02419D20, void, CopyFrom, (app::AnimationCurve * this_ptr, app::AnimationCurve* source))
    IL2CPP_REGISTER_METHOD(0x02419D80, int32_t, AddKey, (app::AnimationCurve * this_ptr, float time, float value))
    IL2CPP_REGISTER_METHOD(0x02419DF0, int32_t, MoveKey, (app::AnimationCurve * this_ptr, int32_t index, app::Keyframe key))
    IL2CPP_REGISTER_METHOD(0x02419E60, app::Keyframe, get_Item, (app::AnimationCurve * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02419F10, int32_t, get_length, (app::AnimationCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02419CC0, void, SetKeys, (app::AnimationCurve * this_ptr, app::Keyframe__Array* keys))
    IL2CPP_REGISTER_METHOD(0x02419E60, app::Keyframe, GetKey, (app::AnimationCurve * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02419C70, app::Keyframe__Array*, GetKeys, (app::AnimationCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02419F60, void, SmoothTangents, (app::AnimationCurve * this_ptr, int32_t index, float weight))
    IL2CPP_REGISTER_METHOD(0x02419FD0, app::AnimationCurve*, Constant, (float time_start, float time_end, float value))
    IL2CPP_REGISTER_METHOD(0x0241A000, app::AnimationCurve*, Linear, (float time_start, float value_start, float time_end, float value_end))
    IL2CPP_REGISTER_METHOD(0x0241A390, app::AnimationCurve*, EaseInOut, (float time_start, float value_start, float time_end, float value_end))
    IL2CPP_REGISTER_METHOD(0x0241A6F0, app::WrapMode__Enum, get_preWrapMode, (app::AnimationCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0241A740, void, set_preWrapMode, (app::AnimationCurve * this_ptr, app::WrapMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x0241A7A0, app::WrapMode__Enum, get_postWrapMode, (app::AnimationCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0241A7F0, void, set_postWrapMode, (app::AnimationCurve * this_ptr, app::WrapMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x0241A850, bool, Equals_1, (app::AnimationCurve * this_ptr, app::Object* o))
    IL2CPP_REGISTER_METHOD(0x0241AA10, bool, Equals_2, (app::AnimationCurve * this_ptr, app::AnimationCurve* other))
    IL2CPP_REGISTER_METHOD(0x01F25890, int32_t, GetHashCode, (app::AnimationCurve * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0241AB30, int32_t, MoveKey_Injected, (app::AnimationCurve * this_ptr, int32_t index, app::Keyframe* key))
    IL2CPP_REGISTER_METHOD(0x0241ABA0, void, GetKey_Injected, (app::AnimationCurve * this_ptr, int32_t index, app::Keyframe* ret))
} // namespace app::classes::UnityEngine::AnimationCurve
