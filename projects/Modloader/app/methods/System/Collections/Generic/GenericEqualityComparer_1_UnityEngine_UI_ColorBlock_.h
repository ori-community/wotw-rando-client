#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericEqualityComparer_1_UnityEngine_UI_ColorBlock_.h>
#include <Modloader/app/structs/ColorBlock.h>
#include <Modloader/app/structs/ColorBlock__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_UnityEngine_UI_ColorBlock_ {
    IL2CPP_REGISTER_METHOD(0x02AB2AE0, bool, Equals_1, (app::GenericEqualityComparer_1_UnityEngine_UI_ColorBlock_ * this_ptr, app::ColorBlock x, app::ColorBlock y))
    IL2CPP_REGISTER_METHOD(0x02439840, int32_t, GetHashCode_1, (app::GenericEqualityComparer_1_UnityEngine_UI_ColorBlock_ * this_ptr, app::ColorBlock obj))
    IL2CPP_REGISTER_METHOD(0x02AB2B30, int32_t, IndexOf, (app::GenericEqualityComparer_1_UnityEngine_UI_ColorBlock_ * this_ptr, app::ColorBlock__Array* array, app::ColorBlock value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB2C00, int32_t, LastIndexOf, (app::GenericEqualityComparer_1_UnityEngine_UI_ColorBlock_ * this_ptr, app::ColorBlock__Array* array, app::ColorBlock value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02AB0EE0, bool, Equals_2, (app::GenericEqualityComparer_1_UnityEngine_UI_ColorBlock_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::GenericEqualityComparer_1_UnityEngine_UI_ColorBlock_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0225BDA0, void, ctor, (app::GenericEqualityComparer_1_UnityEngine_UI_ColorBlock_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::GenericEqualityComparer_1_UnityEngine_UI_ColorBlock_
