#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::usedStandaloneScripts::DeltaTimeManagers::DirectDeltaTimeController {
    IL2CPP_REGISTER_METHOD(0x031253F0, void, PostTimeManagerUpdate, (app::DirectDeltaTimeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DirectDeltaTimeController * this_ptr))
}
