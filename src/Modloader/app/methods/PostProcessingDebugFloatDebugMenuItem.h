#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/Func_1_Single_.h>
#include <Modloader/app/structs/PostProcessingDebugFloatDebugMenuItem.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PostProcessingDebugFloatDebugMenuItem {
    IL2CPP_REGISTER_METHOD(
        0x00C694E0,
        void,
        ctor,
        app::PostProcessingDebugFloatDebugMenuItem* this_ptr,
        app::String* page_name,
        app::String* property_name,
        float non_debug_value,
        app::Func_1_Single_* getter,
        app::Action_1_Single_* setter,
        float min,
        float max,
        float speed
    )
}
