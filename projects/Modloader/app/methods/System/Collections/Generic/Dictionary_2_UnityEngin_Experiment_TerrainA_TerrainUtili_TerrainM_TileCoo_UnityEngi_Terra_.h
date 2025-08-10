#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_T_TVa_Enumera_UnityEng_Experimen_Terrain_TerrainUti_Terrai_TileC_UnityEn_Ter_.h>
#include <Modloader/app/structs/Dictionary_2_T_TVa_KeyCollect_UnityEn_Experime_Terrai_TerrainUti_Terrai_TileC_UnityEn_Ter_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngin_Experiment_TerrainA_TerrainUtili_TerrainM_TileCoo_UnityEngi_Terra_.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap_TileCoord.h>
#include <Modloader/app/structs/Terrain_1.h>

namespace app::classes::System::Collections::Generic::
    Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_ {
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_,
        GetEnumerator,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283AC20,
        void,
        ctor,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BBA760,
        bool,
        TryGetValue,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_* this_ptr,
        app::TerrainUtility_TerrainMap_TileCoord key,
        app::Terrain_1** value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2A0,
        int32_t,
        get_Count,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_* this_ptr,
        app::TerrainUtility_TerrainMap_TileCoord key,
        app::Terrain_1* value
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B2B0,
        app::Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_*,
        get_Keys,
        app::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_* this_ptr
    )
} // namespace
  // app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_TileCoord_UnityEngine_Terrain_
