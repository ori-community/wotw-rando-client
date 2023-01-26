#pragma once
#include <Modloader/app/structs/SceneMetaData_ReverseSceneLoadingZoneInfo.h>
#include <Modloader/app/structs/SceneMetaData_ReverseSceneLoadingZoneInfo__Array.h>
#include <Modloader/app/structs/SceneMetaData_ReverseSceneLoadingZoneInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_ReverseSceneLoadingZoneInfo {
        inline app::SceneMetaData_ReverseSceneLoadingZoneInfo__Class** type_info() {
            static app::SceneMetaData_ReverseSceneLoadingZoneInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneMetaData_ReverseSceneLoadingZoneInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneMetaData_ReverseSceneLoadingZoneInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_ReverseSceneLoadingZoneInfo__Class>(type_info(), "", "SceneMetaData", "ReverseSceneLoadingZoneInfo");
        }
        inline app::SceneMetaData_ReverseSceneLoadingZoneInfo* create() {
            return il2cpp::create_object<app::SceneMetaData_ReverseSceneLoadingZoneInfo>(get_class());
        }
        inline app::SceneMetaData_ReverseSceneLoadingZoneInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneMetaData_ReverseSceneLoadingZoneInfo__Array>(get_class(), size);
        }
        inline app::SceneMetaData_ReverseSceneLoadingZoneInfo__Array* create_array(const std::vector<app::SceneMetaData_ReverseSceneLoadingZoneInfo*>& items) {
            return il2cpp::array_new<app::SceneMetaData_ReverseSceneLoadingZoneInfo__Array>(get_class(), items);
        }
    } // namespace SceneMetaData_ReverseSceneLoadingZoneInfo
} // namespace app::classes::types
