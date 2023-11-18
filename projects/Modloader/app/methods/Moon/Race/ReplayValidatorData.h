#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReplayValidatorData.h>
#include <Modloader/app/structs/ITrialData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Race::ReplayValidatorData {
    IL2CPP_REGISTER_METHOD(0x00C4C7F0, app::ReplayValidatorData*, FromTrialData, (app::ITrialData * data, bool set_positions))
    IL2CPP_REGISTER_METHOD(0x00C4CB70, app::ReplayValidatorData*, FromJson, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x00C4CBF0, app::String*, ToJson, (app::ReplayValidatorData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReplayValidatorData * this_ptr))
} // namespace app::classes::Moon::Race::ReplayValidatorData
