#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GenericEqualityComparer_1_UnityEngine_Bounds_.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Bounds__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_UnityEngine_Bounds_ {
    IL2CPP_REGISTER_METHOD(0x02AB2730, bool, Equals_1, (app::GenericEqualityComparer_1_UnityEngine_Bounds_ * this_ptr, app::Bounds x, app::Bounds y))
    IL2CPP_REGISTER_METHOD(0x02437C90, int32_t, GetHashCode_1, (app::GenericEqualityComparer_1_UnityEngine_Bounds_ * this_ptr, app::Bounds obj))
    IL2CPP_REGISTER_METHOD(0x02AB2760, int32_t, IndexOf, (app::GenericEqualityComparer_1_UnityEngine_Bounds_ * this_ptr, app::Bounds__Array* array, app::Bounds value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB2800, int32_t, LastIndexOf, (app::GenericEqualityComparer_1_UnityEngine_Bounds_ * this_ptr, app::Bounds__Array* array, app::Bounds value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_2, (app::GenericEqualityComparer_1_UnityEngine_Bounds_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::GenericEqualityComparer_1_UnityEngine_Bounds_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, (app::GenericEqualityComparer_1_UnityEngine_Bounds_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_UnityEngine_Bounds_
