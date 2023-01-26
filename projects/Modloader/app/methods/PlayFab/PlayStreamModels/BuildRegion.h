#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BuildRegion_1.h>

namespace app::classes::PlayFab::PlayStreamModels::BuildRegion {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BuildRegion_1 * this_ptr))
}
