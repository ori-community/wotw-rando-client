#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTelemetryKustoWebConfig.h>

namespace app::classes::MoonTelemetryKustoWebConfig {
    IL2CPP_REGISTER_METHOD(0x02EA0340, void, Init, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonTelemetryKustoWebConfig* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::MoonTelemetryKustoWebConfig
