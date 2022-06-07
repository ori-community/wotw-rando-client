#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PlayFab::PlayFabDataGatherer {
    IL2CPP_REGISTER_METHOD(0x01A26070, void, ctor, (app::PlayFabDataGatherer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A26880, app::String *, GenerateReport, (app::PlayFabDataGatherer * this_ptr))
}
