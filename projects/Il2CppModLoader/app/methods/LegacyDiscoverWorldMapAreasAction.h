#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LegacyDiscoverWorldMapAreasAction {
    IL2CPP_REGISTER_METHOD(0x00A18BA0, void, Perform, (app::LegacyDiscoverWorldMapAreasAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00A18D00, app::IEnumerator *, ShowWorldMap, (app::LegacyDiscoverWorldMapAreasAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A18E50, app::IEnumerator *, ReleaseTexture, (app::LegacyDiscoverWorldMapAreasAction * this_ptr, app::AreaMapCanvas * canvas))
    IL2CPP_REGISTER_METHOD(0x00A18FA0, void, ctor, (app::LegacyDiscoverWorldMapAreasAction * this_ptr))
}
