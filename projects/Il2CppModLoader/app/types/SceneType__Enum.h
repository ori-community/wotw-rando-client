#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneType__Enum {
        namespace {
            app::SceneType__Enum__Class* type_info_ref = nullptr;
        }
        app::SceneType__Enum__Class** type_info = &type_info_ref;
        inline app::SceneType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SceneType__Enum__Class>(type_info, "", "SceneType");
        }
        inline app::SceneType__Enum* create() {
            return il2cpp::create_object<app::SceneType__Enum>(get_class());
        }
    } // namespace SceneType__Enum
} // namespace app::classes::types
