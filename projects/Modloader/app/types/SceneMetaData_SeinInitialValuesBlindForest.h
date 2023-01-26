#pragma once
#include <Modloader/app/structs/SceneMetaData_SeinInitialValuesBlindForest.h>
#include <Modloader/app/structs/SceneMetaData_SeinInitialValuesBlindForest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinInitialValuesBlindForest {
        inline app::SceneMetaData_SeinInitialValuesBlindForest__Class** type_info() {
            static app::SceneMetaData_SeinInitialValuesBlindForest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneMetaData_SeinInitialValuesBlindForest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneMetaData_SeinInitialValuesBlindForest__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinInitialValuesBlindForest__Class>(type_info(), "", "SceneMetaData", "SeinInitialValuesBlindForest");
        }
        inline app::SceneMetaData_SeinInitialValuesBlindForest* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinInitialValuesBlindForest>(get_class());
        }
    } // namespace SceneMetaData_SeinInitialValuesBlindForest
} // namespace app::classes::types
