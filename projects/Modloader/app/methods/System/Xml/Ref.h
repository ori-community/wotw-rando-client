#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Ref {
    IL2CPP_REGISTER_METHOD(0x015F8190, bool, Equal, app::String* str_a, app::String* str_b)
}
