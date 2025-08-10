#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConcurrentBagPool_1_LineEntity_.h>
#include <Modloader/app/structs/Func_1_Moon_VisualDebug_LineEntity_.h>

namespace app::classes::Moon::VisualDebug::ConcurrentBagPool_1_LineEntity_ {
    IL2CPP_REGISTER_METHOD(
        0x02AF4640,
        void,
        ctor,
        app::ConcurrentBagPool_1_LineEntity_* this_ptr,
        app::Func_1_Moon_VisualDebug_LineEntity_* object_generator,
        int32_t initial_size,
        bool auto_change_size
    )
}
