#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/VisibleReflectionProbe.h>
#include <Modloader/app/structs/VisibleReflectionProbe__Array.h>

namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_*, get_Default, )
    IL2CPP_REGISTER_METHOD(0x02B4ED80, app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02B4F6E0,
        int32_t,
        IndexOf,
        app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* this_ptr,
        app::VisibleReflectionProbe__Array* array,
        app::VisibleReflectionProbe value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4F890,
        int32_t,
        LastIndexOf,
        app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* this_ptr,
        app::VisibleReflectionProbe__Array* array,
        app::VisibleReflectionProbe value,
        int32_t start_index,
        int32_t count
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4FA40,
        int32_t,
        IEqualityComparer_GetHashCode,
        app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* this_ptr,
        app::Object* obj
    )
    IL2CPP_REGISTER_METHOD(
        0x02B4FBA0,
        bool,
        IEqualityComparer_Equals,
        app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_* this_ptr)
} // namespace app::classes::System::Collections::Generic::EqualityComparer_1_UnityEngine_Experimental_Rendering_VisibleReflectionProbe_
