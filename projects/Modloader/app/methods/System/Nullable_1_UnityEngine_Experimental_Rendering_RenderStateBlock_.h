#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock_.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Boxed.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RenderStateBlock.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock_ {
    IL2CPP_REGISTER_METHOD(0x00210F70, bool, get_HasValue, app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00210F80, app::RenderStateBlock, get_Value, app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00210F30,
        void,
        ctor,
        app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Boxed* this_ptr,
        app::RenderStateBlock value
    )
    IL2CPP_REGISTER_METHOD(
        0x002110E0,
        bool,
        Equals_1,
        app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Boxed* this_ptr,
        app::Object* other
    )
    IL2CPP_REGISTER_METHOD(
        0x002111E0,
        bool,
        Equals_2,
        app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Boxed* this_ptr,
        app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock_ other
    )
    IL2CPP_REGISTER_METHOD(0x00211310, int32_t, GetHashCode, app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00211490,
        app::RenderStateBlock,
        GetValueOrDefault_1,
        app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x002114E0,
        app::RenderStateBlock,
        GetValueOrDefault_2,
        app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Boxed* this_ptr,
        app::RenderStateBlock default_value
    )
    IL2CPP_REGISTER_METHOD(0x00211570, app::String*, ToString, app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0288AE60, app::Object*, Box, app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock_ o)
    IL2CPP_REGISTER_METHOD(0x0288AF70, app::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock_, Unbox, app::Object* o)
} // namespace app::classes::System::Nullable_1_UnityEngine_Experimental_Rendering_RenderStateBlock_
