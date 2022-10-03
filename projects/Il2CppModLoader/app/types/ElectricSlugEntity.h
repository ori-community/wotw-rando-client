#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ElectricSlugEntity {
        namespace {
            app::ElectricSlugEntity__Class* type_info_ref = nullptr;
        }
        app::ElectricSlugEntity__Class** type_info = &type_info_ref;
        inline app::ElectricSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::ElectricSlugEntity__Class>(type_info, "", "ElectricSlugEntity");
        }
        inline app::ElectricSlugEntity* create() {
            return il2cpp::create_object<app::ElectricSlugEntity>(get_class());
        }
    } // namespace ElectricSlugEntity
} // namespace app::classes::types
