#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinInitialValuesBlindForest {
        namespace {
            inline app::SceneMetaData_SeinInitialValuesBlindForest__Class* type_info_ref = nullptr;
        }
        inline app::SceneMetaData_SeinInitialValuesBlindForest__Class** type_info = &type_info_ref;
        inline app::SceneMetaData_SeinInitialValuesBlindForest__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinInitialValuesBlindForest__Class>(type_info, "", "SceneMetaData", "SeinInitialValuesBlindForest");
        }
        inline app::SceneMetaData_SeinInitialValuesBlindForest* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinInitialValuesBlindForest>(get_class());
        }
    } // namespace SceneMetaData_SeinInitialValuesBlindForest
} // namespace app::classes::types
