#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HealthBarPositioning {
        namespace {
            app::HealthBarPositioning__Class* type_info_ref = nullptr;
        }
        app::HealthBarPositioning__Class** type_info = &type_info_ref;
        inline app::HealthBarPositioning__Class* get_class() {
            return il2cpp::get_class<app::HealthBarPositioning__Class>(type_info, "", "HealthBarPositioning");
        }
        inline app::HealthBarPositioning* create() {
            return il2cpp::create_object<app::HealthBarPositioning>(get_class());
        }
    } // namespace HealthBarPositioning
} // namespace app::classes::types
