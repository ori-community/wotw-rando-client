#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Time {
        namespace {
            app::Time__Class* type_info_ref = nullptr;
        }
        app::Time__Class** type_info = &type_info_ref;
        inline app::Time__Class* get_class() {
            return il2cpp::get_class<app::Time__Class>(type_info, "UnityEngine", "Time");
        }
        inline app::Time* create() {
            return il2cpp::create_object<app::Time>(get_class());
        }
    } // namespace Time
} // namespace app::classes::types
