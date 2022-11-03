#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::usedStandaloneScripts::DeltaTimeManagers::AverageBothDeltaTimeController {
    IL2CPP_REGISTER_METHOD(0x00F76640, void, Initialize, (app::AverageBothDeltaTimeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F76690, void, PreTimeManagerUpdate, (app::AverageBothDeltaTimeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F76A70, void, PostTimeManagerUpdate, (app::AverageBothDeltaTimeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F76B50, void, ctor, (app::AverageBothDeltaTimeController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F76C10, void, cctor, ())
} // namespace app::classes::usedStandaloneScripts::DeltaTimeManagers::AverageBothDeltaTimeController
