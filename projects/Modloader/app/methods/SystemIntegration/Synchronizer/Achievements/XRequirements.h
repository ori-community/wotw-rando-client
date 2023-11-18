#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XRequirements.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::XRequirements {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XRequirements * this_ptr))
}
