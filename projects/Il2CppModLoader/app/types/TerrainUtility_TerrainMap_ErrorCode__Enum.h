#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TerrainUtility_TerrainMap_ErrorCode__Enum {
        namespace {
            inline app::TerrainUtility_TerrainMap_ErrorCode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TerrainUtility_TerrainMap_ErrorCode__Enum__Class** type_info = &type_info_ref;
        inline app::TerrainUtility_TerrainMap_ErrorCode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TerrainUtility_TerrainMap_ErrorCode__Enum__Class>(type_info, "UnityEngine.Experimental.TerrainAPI", "TerrainUtility+TerrainMap", "ErrorCode");
        }
        inline app::TerrainUtility_TerrainMap_ErrorCode__Enum* create() {
            return il2cpp::create_object<app::TerrainUtility_TerrainMap_ErrorCode__Enum>(get_class());
        }
    } // namespace TerrainUtility_TerrainMap_ErrorCode__Enum
} // namespace app::classes::types
