#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Linq::Res {
    IL2CPP_REGISTER_METHOD(0x0302CA20, app::String*, GetString_1, app::String* name)
    IL2CPP_REGISTER_METHOD(0x0302D5B0, app::String*, GetString_2, app::String* name, app::Object__Array* args)
} // namespace app::classes::System::Xml::Linq::Res
