#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::System::ComponentModel::IntSecurity {
    IL2CPP_REGISTER_METHOD(0x01FEFC10, app::String*, UnsafeGetFullPath, app::String* file_name)
}
