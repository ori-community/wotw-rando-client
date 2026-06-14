#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StaggerBehaviour.h>

namespace app::classes::StaggerBehaviour {
    IL2CPP_REGISTER_METHOD(0x00672030, void, ctor, app::StaggerBehaviour* this_ptr)
}
