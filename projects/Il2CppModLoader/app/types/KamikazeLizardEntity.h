#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KamikazeLizardEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KamikazeLizardEntity__Class** type_info;
        inline app::KamikazeLizardEntity__Class* get_class() {
            return il2cpp::get_class<app::KamikazeLizardEntity__Class>(type_info, "", "KamikazeLizardEntity");
        }
        inline app::KamikazeLizardEntity* create() {
            return il2cpp::create_object<app::KamikazeLizardEntity>(get_class());
        }
    } // namespace KamikazeLizardEntity
} // namespace app::classes::types
