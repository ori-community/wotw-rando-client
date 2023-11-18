#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EmissiveIndividualSettings__Boxed.h>
#include <Modloader/app/structs/EmissiveIndividualSettings.h>

namespace app::classes::EmissiveIndividualSettings {
    IL2CPP_REGISTER_METHOD(0x0011D290, void, CopyFrom, (app::EmissiveIndividualSettings__Boxed * this_ptr, app::EmissiveIndividualSettings settings))
}
