#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TypeIdentifier.h>

namespace app::classes::System::TypeIdentifiers {
    IL2CPP_REGISTER_METHOD(0x027C09A0, app::TypeIdentifier*, FromDisplay, app::String* display_name)
}
