#pragma once
#include <Modloader/app/structs/TerrainUtility_TerrainMap_ErrorCode__Enum.h>
#include <Modloader/app/structs/TerrainUtility_TerrainMap_ErrorCode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainMap_ErrorCode__Enum {
        inline app::TerrainUtility_TerrainMap_ErrorCode__Enum__Class** type_info() {
            static app::TerrainUtility_TerrainMap_ErrorCode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TerrainUtility_TerrainMap_ErrorCode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TerrainUtility_TerrainMap_ErrorCode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_TerrainMap_ErrorCode__Enum__Class>(type_info(), "UnityEngine.Experimental.TerrainAPI", "TerrainUtility+TerrainMap", "ErrorCode");
        }
        inline app::TerrainUtility_TerrainMap_ErrorCode__Enum* create() {
            return il2cpp::create_object<app::TerrainUtility_TerrainMap_ErrorCode__Enum>(get_class());
        }
    } // namespace TerrainUtility_TerrainMap_ErrorCode__Enum
} // namespace app::classes::types
