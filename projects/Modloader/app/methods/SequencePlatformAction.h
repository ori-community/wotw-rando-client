#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SequencePlatformAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SequencePlatformAction {
    IL2CPP_REGISTER_METHOD(0x00AB7000, void, Perform, (app::SequencePlatformAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00AB71B0, void, ctor, (app::SequencePlatformAction * this_ptr))
} // namespace app::classes::SequencePlatformAction
