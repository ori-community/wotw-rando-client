#pragma once
#include <Modloader/app/structs/SceneMetaData_SceneSavePedestal.h>
#include <Modloader/app/structs/SceneMetaData_SceneSavePedestal__Array.h>
#include <Modloader/app/structs/SceneMetaData_SceneSavePedestal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_SceneSavePedestal {
        inline app::SceneMetaData_SceneSavePedestal__Class** type_info() {
            static app::SceneMetaData_SceneSavePedestal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneMetaData_SceneSavePedestal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneMetaData_SceneSavePedestal__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SceneSavePedestal__Class>(type_info(), "", "SceneMetaData", "SceneSavePedestal");
        }
        inline app::SceneMetaData_SceneSavePedestal* create() {
            return il2cpp::create_object<app::SceneMetaData_SceneSavePedestal>(get_class());
        }
        inline app::SceneMetaData_SceneSavePedestal__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneMetaData_SceneSavePedestal__Array>(get_class(), size);
        }
        inline app::SceneMetaData_SceneSavePedestal__Array* create_array(const std::vector<app::SceneMetaData_SceneSavePedestal*>& items) {
            return il2cpp::array_new<app::SceneMetaData_SceneSavePedestal__Array>(get_class(), items);
        }
    } // namespace SceneMetaData_SceneSavePedestal
} // namespace app::classes::types
