#pragma once
#include <Modloader/app/structs/SceneMetaData_InitialShard.h>
#include <Modloader/app/structs/SceneMetaData_InitialShard__Array.h>
#include <Modloader/app/structs/SceneMetaData_InitialShard__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_InitialShard {
        inline app::SceneMetaData_InitialShard__Class** type_info() {
            static app::SceneMetaData_InitialShard__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneMetaData_InitialShard__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneMetaData_InitialShard__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_InitialShard__Class>(type_info(), "", "SceneMetaData", "InitialShard");
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
