#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::CrashContext {
    IL2CPP_REGISTER_METHOD(0x00CCE450, bool, get_IsDoingCleanup, ())
    IL2CPP_REGISTER_METHOD(0x00CCE4D0, void, set_IsDoingCleanup, (bool value))
    IL2CPP_REGISTER_METHOD(0x00CCE5D0, void, SetTelemetrySessionID, (app::Guid guid))
    IL2CPP_REGISTER_METHOD(0x00CCE680, void, Initialize, ())
    IL2CPP_REGISTER_METHOD(0x00CCE9E0, app::Vector2, GetPosition, ())
    IL2CPP_REGISTER_METHOD(0x00CCEC40, app::CrashContext_Data, GetData, ())
    IL2CPP_REGISTER_METHOD(0x00CCEEF0, void, UpdateMemoryRegionUnsafe, ())
    IL2CPP_REGISTER_METHOD(0x00CCEFF0, void, UpdateMemoryRegion, ())
} // namespace app::classes::Moon::CrashContext
