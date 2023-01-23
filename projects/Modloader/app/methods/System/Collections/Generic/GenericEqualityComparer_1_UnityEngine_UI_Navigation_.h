#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GenericEqualityComparer_1_UnityEngine_UI_Navigation_.h>
#include <Modloader/app/structs/Navigation.h>
#include <Modloader/app/structs/Navigation__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_UnityEngine_UI_Navigation_ {
    IL2CPP_REGISTER_METHOD(0x02AB2CD0, bool, Equals_1, (app::GenericEqualityComparer_1_UnityEngine_UI_Navigation_ * this_ptr, app::Navigation x, app::Navigation y))
    IL2CPP_REGISTER_METHOD(0x01CD0900, int32_t, GetHashCode_1, (app::GenericEqualityComparer_1_UnityEngine_UI_Navigation_ * this_ptr, app::Navigation obj))
    IL2CPP_REGISTER_METHOD(0x02AB2D10, int32_t, IndexOf, (app::GenericEqualityComparer_1_UnityEngine_UI_Navigation_ * this_ptr, app::Navigation__Array* array, app::Navigation value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB2DC0, int32_t, LastIndexOf, (app::GenericEqualityComparer_1_UnityEngine_UI_Navigation_ * this_ptr, app::Navigation__Array* array, app::Navigation value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_2, (app::GenericEqualityComparer_1_UnityEngine_UI_Navigation_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::GenericEqualityComparer_1_UnityEngine_UI_Navigation_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, (app::GenericEqualityComparer_1_UnityEngine_UI_Navigation_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_UnityEngine_UI_Navigation_
