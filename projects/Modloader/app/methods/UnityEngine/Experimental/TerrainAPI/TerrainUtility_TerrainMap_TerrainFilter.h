#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap_TerrainFilter.h>
#include <Modloader/app/structs/Terrain_1.h>

namespace app::classes::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::TerrainUtility_TerrainMap_TerrainFilter* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x0167EC80, bool, Invoke, app::TerrainUtility_TerrainMap_TerrainFilter* this_ptr, app::Terrain_1* terrain)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::TerrainUtility_TerrainMap_TerrainFilter* this_ptr,
        app::Terrain_1* terrain,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, app::TerrainUtility_TerrainMap_TerrainFilter* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::Experimental::TerrainAPI::TerrainUtility_TerrainMap_TerrainFilter
