#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatProviderZone.h>

namespace app::classes::FloatProviderZone {
    IL2CPP_REGISTER_METHOD(0x01270FC0, float, GetValue, (app::FloatProviderZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01271120, float, XValue, (app::FloatProviderZone * this_ptr, float x))
    IL2CPP_REGISTER_METHOD(0x012716C0, float, YValue, (app::FloatProviderZone * this_ptr, float y))
    IL2CPP_REGISTER_METHOD(0x01271C60, void, ctor, (app::FloatProviderZone * this_ptr))
} // namespace app::classes::FloatProviderZone
