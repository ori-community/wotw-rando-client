#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint_.h>
#include <Modloader/app/structs/EnumDebugMenuItem_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint_.h>
#include <Modloader/app/structs/Func_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::EnumDebugMenuItem_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint_ {
    IL2CPP_REGISTER_METHOD(
        0x019E1D40,
        void,
        ctor,
        app::EnumDebugMenuItem_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint_* this_ptr,
        app::String* path,
        app::String* text,
        app::Func_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint_* getter,
        app::Action_1_UnityEngine_Experimental_Rendering_GraphicsJobsSyncPoint_* setter,
        app::String* help,
        bool should_show_only_selected
    )
}
