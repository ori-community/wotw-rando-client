#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Evidence {
        namespace {
            app::Evidence__Class* type_info_ref = nullptr;
        }
        app::Evidence__Class** type_info = &type_info_ref;
        inline app::Evidence__Class* get_class() {
            return il2cpp::get_class<app::Evidence__Class>(type_info, "System.Security.Policy", "Evidence");
        }
        inline app::Evidence* create() {
            return il2cpp::create_object<app::Evidence>(get_class());
        }
    } // namespace Evidence
} // namespace app::classes::types
