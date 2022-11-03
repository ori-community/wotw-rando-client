#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ScreenshotLegacySetup {
    IL2CPP_REGISTER_METHOD(0x01068F60, app::Type*, get_Type, (app::ScreenshotLegacySetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01069060, void, set_Type, (app::ScreenshotLegacySetup * this_ptr, app::Type* value))
    IL2CPP_REGISTER_METHOD(0x01069140, app::String*, get_FormattedName, (app::ScreenshotLegacySetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01069330, void, ctor_1, (app::ScreenshotLegacySetup * this_ptr, app::String* name, app::String* hierarchy_path, app::Type* type, app::Vector2 position, app::String* prefab_g_u_i_d))
    IL2CPP_REGISTER_METHOD(0x01069430, void, ctor_2, (app::ScreenshotLegacySetup * this_ptr, app::String* name, app::String* hierarchy_path, app::Type* type, app::Vector2 position, app::String* prefab_g_u_i_d, bool mark_as_turd))
} // namespace app::classes::ScreenshotLegacySetup
