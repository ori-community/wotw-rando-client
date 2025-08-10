#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ZoneProcessor.h>

namespace app::classes::Moon::Wwise::ZoneProcessor {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_ActiveListenerZones, app::ZoneProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC59E0, int32_t, get_MaxListenerZones, app::ZoneProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_ActiveEmitterZones, app::ZoneProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_MaxEmitterZones, app::ZoneProcessor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ZoneProcessor* this_ptr)
} // namespace app::classes::Moon::Wwise::ZoneProcessor
