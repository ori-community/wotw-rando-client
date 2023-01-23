#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberAtlasExclusions_SceneExclusion.h>
#include <Modloader/app/structs/UberAtlasExclusions.h>
#include <Modloader/app/structs/SceneMetaData.h>

namespace app::classes::UberAtlasExclusions {
    IL2CPP_REGISTER_METHOD(0x013DE100, app::UberAtlasExclusions_SceneExclusion, GetExclusion, (app::UberAtlasExclusions * this_ptr, app::SceneMetaData* scene_meta, bool* found))
    IL2CPP_REGISTER_METHOD(0x013DE2F0, void, BuildDictionary, (app::UberAtlasExclusions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013DE530, void, ctor, (app::UberAtlasExclusions * this_ptr))
} // namespace app::classes::UberAtlasExclusions
