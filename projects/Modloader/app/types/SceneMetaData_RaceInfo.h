#pragma once
#include <Modloader/app/structs/SceneMetaData_RaceInfo.h>
#include <Modloader/app/structs/SceneMetaData_RaceInfo__Array.h>
#include <Modloader/app/structs/SceneMetaData_RaceInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_RaceInfo {
        inline app::SceneMetaData_RaceInfo__Class** type_info() {
            static app::SceneMetaData_RaceInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneMetaData_RaceInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneMetaData_RaceInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_RaceInfo__Class>(type_info(), "", "SceneMetaData", "RaceInfo");
        }
        inline app::SceneMetaData_RaceInfo* create() {
            return il2cpp::create_object<app::SceneMetaData_RaceInfo>(get_class());
        }
        inline app::SceneMetaData_RaceInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneMetaData_RaceInfo__Array>(get_class(), size);
        }
        inline app::SceneMetaData_RaceInfo__Array* create_array(const std::vector<app::SceneMetaData_RaceInfo*>& items) {
            return il2cpp::array_new<app::SceneMetaData_RaceInfo__Array>(get_class(), items);
        }
    } // namespace SceneMetaData_RaceInfo
} // namespace app::classes::types
