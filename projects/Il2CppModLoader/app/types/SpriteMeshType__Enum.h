#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteMeshType__Enum {
        namespace {
            app::SpriteMeshType__Enum__Class* type_info_ref = nullptr;
        }
        app::SpriteMeshType__Enum__Class** type_info = &type_info_ref;
        inline app::SpriteMeshType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpriteMeshType__Enum__Class>(type_info, "UnityEngine", "SpriteMeshType");
        }
        inline app::SpriteMeshType__Enum* create() {
            return il2cpp::create_object<app::SpriteMeshType__Enum>(get_class());
        }
    } // namespace SpriteMeshType__Enum
} // namespace app::classes::types
