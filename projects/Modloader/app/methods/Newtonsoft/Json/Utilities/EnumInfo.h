#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumInfo.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>

namespace app::classes::Newtonsoft::Json::Utilities::EnumInfo {
    IL2CPP_REGISTER_METHOD(
        0x01C0F570,
        void,
        ctor,
        app::EnumInfo* this_ptr,
        bool is_flags,
        app::UInt64__Array* values,
        app::String__Array* names,
        app::String__Array* resolved_names
    )
}
