#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_UnityEngine_Quaternion_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Quaternion__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Quaternion_ {
    IL2CPP_REGISTER_METHOD(0x02438EC0, bool, Equals_1, (app::ObjectEqualityComparer_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion x, app::Quaternion y))
    IL2CPP_REGISTER_METHOD(0x02438F20, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion obj))
    IL2CPP_REGISTER_METHOD(0x02438F40, int32_t, IndexOf, (app::ObjectEqualityComparer_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion__Array* array, app::Quaternion value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02439030, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_UnityEngine_Quaternion_ * this_ptr, app::Quaternion__Array* array, app::Quaternion value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_UnityEngine_Quaternion_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_UnityEngine_Quaternion_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_UnityEngine_Quaternion_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_UnityEngine_Quaternion_
