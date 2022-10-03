#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ContactPoint__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ContactPoint__Array__Class** type_info;
        inline app::ContactPoint__Array__Class* get_class() {
            return il2cpp::get_class<app::ContactPoint__Array__Class>(type_info, "UnityEngine", "ContactPoint[]");
        }
        inline app::ContactPoint__Array* create() {
            return il2cpp::create_object<app::ContactPoint__Array>(get_class());
        }
    } // namespace ContactPoint__Array
} // namespace app::classes::types
