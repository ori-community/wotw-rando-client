#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LizardEntity__Class** type_info;
        inline app::LizardEntity__Class* get_class() {
            return il2cpp::get_class<app::LizardEntity__Class>(type_info, "", "LizardEntity");
        }
        inline app::LizardEntity* create() {
            return il2cpp::create_object<app::LizardEntity>(get_class());
        }
    } // namespace LizardEntity
} // namespace app::classes::types
