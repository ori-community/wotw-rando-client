#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_SurfaceMaterialObjectPair_1_.h>
#include <Modloader/app/structs/SurfaceBasedPrefabSettings.h>

namespace app::classes::SurfaceBasedPrefabSettings {
    IL2CPP_REGISTER_METHOD(0x006726A0, app::List_1_SurfaceMaterialObjectPair_1_*, get_Pairs, (app::SurfaceBasedPrefabSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00672730, void, ctor, (app::SurfaceBasedPrefabSettings * this_ptr))
} // namespace app::classes::SurfaceBasedPrefabSettings
