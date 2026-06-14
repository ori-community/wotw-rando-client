#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StaggerSettings.h>

namespace app::classes::Moon::StaggerSettings {
    IL2CPP_REGISTER_METHOD(0x00E301C0, void, ctor, app::StaggerSettings* this_ptr)
}
