#pragma once
#include <Modloader/app/structs/SceneType__Enum.h>
#include <Modloader/app/structs/SceneType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneType__Enum {
        inline app::SceneType__Enum__Class** type_info() {
            static app::SceneType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SceneType__Enum__Class>(type_info(), "", "SceneType");
        }
        inline app::SceneType__Enum* create() {
            return il2cpp::create_object<app::SceneType__Enum>(get_class());
        }
    } // namespace SceneType__Enum
} // namespace app::classes::types
