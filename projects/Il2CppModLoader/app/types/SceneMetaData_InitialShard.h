#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneMetaData_InitialShard {
        namespace {
            inline app::SceneMetaData_InitialShard__Class* type_info_ref = nullptr;
        }
        inline app::SceneMetaData_InitialShard__Class** type_info = &type_info_ref;
        inline app::SceneMetaData_InitialShard__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_InitialShard__Class>(type_info, "", "SceneMetaData", "InitialShard");
        }
        inline app::SceneMetaData_InitialShard* create() {
            return il2cpp::create_object<app::SceneMetaData_InitialShard>(get_class());
        }
        inline app::SceneMetaData_InitialShard__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneMetaData_InitialShard__Array>(get_class(), size);
        }
        inline app::SceneMetaData_InitialShard__Array* create_array(const std::vector<app::SceneMetaData_InitialShard*>& items) {
            return il2cpp::array_new<app::SceneMetaData_InitialShard__Array>(get_class(), items);
        }
    } // namespace SceneMetaData_InitialShard
} // namespace app::classes::types
