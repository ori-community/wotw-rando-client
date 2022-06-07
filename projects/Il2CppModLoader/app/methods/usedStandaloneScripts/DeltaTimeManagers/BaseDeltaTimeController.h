#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::usedStandaloneScripts::DeltaTimeManagers::BaseDeltaTimeController {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (app::BaseDeltaTimeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PreTimeManagerUpdate, (app::BaseDeltaTimeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PostTimeManagerUpdate, (app::BaseDeltaTimeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BaseDeltaTimeController * this_ptr))
}
