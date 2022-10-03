#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Resolution__Array {
        namespace {
            app::Resolution__Array__Class* type_info_ref = nullptr;
        }
        app::Resolution__Array__Class** type_info = &type_info_ref;
        inline app::Resolution__Array__Class* get_class() {
            return il2cpp::get_class<app::Resolution__Array__Class>(type_info, "UnityEngine", "Resolution[]");
        }
        inline app::Resolution__Array* create() {
            return il2cpp::create_object<app::Resolution__Array>(get_class());
        }
    } // namespace Resolution__Array
} // namespace app::classes::types
