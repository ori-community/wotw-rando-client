#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabDataGatherer.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::PlayFab::PlayFabDataGatherer {
    IL2CPP_REGISTER_METHOD(0x01A26070, void, ctor, app::PlayFabDataGatherer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A26880, app::String*, GenerateReport, app::PlayFabDataGatherer* this_ptr)
} // namespace app::classes::PlayFab::PlayFabDataGatherer
