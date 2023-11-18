#pragma once
#include <Modloader/app/structs/SceneMetaData_SeinWorldState.h>
#include <Modloader/app/structs/SceneMetaData_SeinWorldState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinWorldState {
        inline app::SceneMetaData_SeinWorldState__Class** type_info() {
            static app::SceneMetaData_SeinWorldState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneMetaData_SeinWorldState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneMetaData_SeinWorldState__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinWorldState__Class>(type_info(), "", "SceneMetaData", "SeinWorldState");
        }
        inline app::SceneMetaData_SeinWorldState* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinWorldState>(get_class());
        }
    } // namespace SceneMetaData_SeinWorldState
} // namespace app::classes::types
