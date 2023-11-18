#pragma once
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Ent_Syst_Int_UnityEngi_Experimen_Terrain_TerrainUtil_Terrain___Ar__Cl.h>
#include <Modloader/app/structs/Dictionary_2_TK_TVal_Ent_Syst_Int_UnityEngi_Experiment_TerrainA_TerrainUtili_TerrainM___Ar.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility+TerrainMap][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap___Array
} // namespace app::classes::types
