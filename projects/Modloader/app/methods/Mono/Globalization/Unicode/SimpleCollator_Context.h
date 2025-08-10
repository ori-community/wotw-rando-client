#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompareOptions__Enum.h>
#include <Modloader/app/structs/SimpleCollator_Context__Boxed.h>

namespace app::classes::Mono::Globalization::Unicode::SimpleCollator_Context {
    IL2CPP_REGISTER_METHOD(
        0x001EA180,
        void,
        ctor,
        app::SimpleCollator_Context__Boxed* this_ptr,
        app::CompareOptions__Enum opt,
        uint8_t* always_match_flags,
        uint8_t* never_match_flags,
        uint8_t* buffer1,
        uint8_t* buffer2,
        uint8_t* prev1
    )
}
