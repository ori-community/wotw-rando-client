#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BoxCollider2D {
        namespace {
            inline app::BoxCollider2D__Class* type_info_ref = nullptr;
        }
        inline app::BoxCollider2D__Class** type_info = &type_info_ref;
        inline app::BoxCollider2D__Class* get_class() {
            return il2cpp::get_class<app::BoxCollider2D__Class>(type_info, "UnityEngine", "BoxCollider2D");
        }
        inline app::BoxCollider2D* create() {
            return il2cpp::create_object<app::BoxCollider2D>(get_class());
        }
    } // namespace BoxCollider2D
} // namespace app::classes::types
