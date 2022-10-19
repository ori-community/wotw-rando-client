#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompositeCollider2D {
        namespace {
            inline app::CompositeCollider2D__Class* type_info_ref = nullptr;
        }
        inline app::CompositeCollider2D__Class** type_info = &type_info_ref;
        inline app::CompositeCollider2D__Class* get_class() {
            return il2cpp::get_class<app::CompositeCollider2D__Class>(type_info, "UnityEngine", "CompositeCollider2D");
        }
        inline app::CompositeCollider2D* create() {
            return il2cpp::create_object<app::CompositeCollider2D>(get_class());
        }
    } // namespace CompositeCollider2D
} // namespace app::classes::types
