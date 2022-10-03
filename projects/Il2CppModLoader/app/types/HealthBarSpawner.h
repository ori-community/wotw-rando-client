#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HealthBarSpawner {
        namespace {
            app::HealthBarSpawner__Class* type_info_ref = nullptr;
        }
        app::HealthBarSpawner__Class** type_info = &type_info_ref;
        inline app::HealthBarSpawner__Class* get_class() {
            return il2cpp::get_class<app::HealthBarSpawner__Class>(type_info, "", "HealthBarSpawner");
        }
        inline app::HealthBarSpawner* create() {
            return il2cpp::create_object<app::HealthBarSpawner>(get_class());
        }
    } // namespace HealthBarSpawner
} // namespace app::classes::types
