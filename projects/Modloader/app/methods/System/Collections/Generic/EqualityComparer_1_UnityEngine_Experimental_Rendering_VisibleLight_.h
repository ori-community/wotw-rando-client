#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VisibleLight.h>
#include <Modloader/app/structs/VisibleLight__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02B4DD70, app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02B4E6D0, int32_t, IndexOf, (app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr, app::VisibleLight__Array* array, app::VisibleLight value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B4E870, int32_t, LastIndexOf, (app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr, app::VisibleLight__Array* array, app::VisibleLight value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x02B4EA00, int32_t, IEqualityComparer_GetHashCode, (app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02B4EB50, bool, IEqualityComparer_Equals, (app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleLight_
