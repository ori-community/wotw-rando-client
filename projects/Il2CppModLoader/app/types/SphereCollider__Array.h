#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SphereCollider__Array {
        namespace {
            inline app::SphereCollider__Array__Class* type_info_ref = nullptr;
        }
        inline app::SphereCollider__Array__Class** type_info = &type_info_ref;
        inline app::SphereCollider__Array__Class* get_class() {
            return il2cpp::get_class<app::SphereCollider__Array__Class>(type_info, "UnityEngine", "SphereCollider[]");
        }
        inline app::SphereCollider__Array* create() {
            return il2cpp::create_object<app::SphereCollider__Array>(get_class());
        }
    } // namespace SphereCollider__Array
} // namespace app::classes::types
