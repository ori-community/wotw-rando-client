#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_ReverseSceneLoadingZoneInfo {
        namespace {
            app::SceneMetaData_ReverseSceneLoadingZoneInfo__Class* type_info_ref = nullptr;
        }
        app::SceneMetaData_ReverseSceneLoadingZoneInfo__Class** type_info = &type_info_ref;
        inline app::SceneMetaData_ReverseSceneLoadingZoneInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_ReverseSceneLoadingZoneInfo__Class>(type_info, "", "SceneMetaData", "ReverseSceneLoadingZoneInfo");
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
