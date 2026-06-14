#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LightShadingZoneEditorSetup.h>

namespace app::classes::LightShadingZoneEditorSetup {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, app::LightShadingZoneEditorSetup* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::LightShadingZoneEditorSetup* this_ptr)
} // namespace app::classes::LightShadingZoneEditorSetup
