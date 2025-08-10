#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Contraction.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Globalization::Unicode::Contraction {
    IL2CPP_REGISTER_METHOD(
        0x023BA050,
        void,
        ctor,
        app::Contraction* this_ptr,
        int32_t index,
        app::Char__Array* source,
        app::String* replacement,
        app::Byte__Array* sortkey
    )
}
