#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ErrorMessageController {
    IL2CPP_REGISTER_METHOD(0x00982100, void, Awake, (app::ErrorMessageController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00982190, void, OnDestroy, (app::ErrorMessageController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00982210, void, ReportSaveFailed, (int32_t error_code))
    IL2CPP_REGISTER_METHOD(0x009823C0, void, ReportFailedToLoad, ())
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ErrorMessageController * this_ptr))
} // namespace app::classes::ErrorMessageController
