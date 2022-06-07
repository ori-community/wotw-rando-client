#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberAtlasExclusions {
    IL2CPP_REGISTER_METHOD(0x013DE100, app::UberAtlasExclusions_SceneExclusion, GetExclusion, (app::UberAtlasExclusions * this_ptr, app::SceneMetaData * scene_meta, bool * found))
    IL2CPP_REGISTER_METHOD(0x013DE2F0, void, BuildDictionary, (app::UberAtlasExclusions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013DE530, void, ctor, (app::UberAtlasExclusions * this_ptr))
}
