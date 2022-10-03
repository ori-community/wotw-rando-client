#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::BoneWeight {
    IL2CPP_REGISTER_METHOD(0x001EB400, float, get_weight0, (app::BoneWeight__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB410, float, get_weight1, (app::BoneWeight__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9B90, float, get_weight2, (app::BoneWeight__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9BA0, float, get_weight3, (app::BoneWeight__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120160, int32_t, get_boneIndex0, (app::BoneWeight__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120170, int32_t, get_boneIndex1, (app::BoneWeight__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB420, int32_t, get_boneIndex2, (app::BoneWeight__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB430, int32_t, get_boneIndex3, (app::BoneWeight__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB440, int32_t, GetHashCode, (app::BoneWeight__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EB4E0, bool, Equals_1, (app::BoneWeight__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001EB4F0, bool, Equals_2, (app::BoneWeight__Boxed * this_ptr, app::BoneWeight other))
} // namespace app::classes::UnityEngine::BoneWeight
