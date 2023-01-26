#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Enum_ValuesAndNames.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/UInt64__Array.h>

namespace app::classes::System::Enum_ValuesAndNames {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, (app::Enum_ValuesAndNames * this_ptr, app::UInt64__Array* values, app::String__Array* names))
}
