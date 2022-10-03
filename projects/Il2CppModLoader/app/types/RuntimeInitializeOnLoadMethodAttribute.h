#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeInitializeOnLoadMethodAttribute {
        namespace {
            app::RuntimeInitializeOnLoadMethodAttribute__Class* type_info_ref = nullptr;
        }
        app::RuntimeInitializeOnLoadMethodAttribute__Class** type_info = &type_info_ref;
        inline app::RuntimeInitializeOnLoadMethodAttribute__Class* get_class() {
            return il2cpp::get_class<app::RuntimeInitializeOnLoadMethodAttribute__Class>(type_info, "UnityEngine", "RuntimeInitializeOnLoadMethodAttribute");
        }
        inline app::RuntimeInitializeOnLoadMethodAttribute* create() {
            return il2cpp::create_object<app::RuntimeInitializeOnLoadMethodAttribute>(get_class());
        }
    } // namespace RuntimeInitializeOnLoadMethodAttribute
} // namespace app::classes::types
