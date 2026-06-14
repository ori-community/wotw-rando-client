#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RaceRequestResult.h>

namespace app::classes::SystemIntegration::Races::RaceRequestResult {
    IL2CPP_REGISTER_METHOD(0x00529EA0, void, ctor, app::RaceRequestResult* this_ptr)
}
