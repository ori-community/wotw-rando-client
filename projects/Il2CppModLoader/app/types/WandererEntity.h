#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WandererEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WandererEntity__Class** type_info;
        inline app::WandererEntity__Class* get_class() {
            return il2cpp::get_class<app::WandererEntity__Class>(type_info, "", "WandererEntity");
        }
        inline app::WandererEntity* create() {
            return il2cpp::create_object<app::WandererEntity>(get_class());
        }
    } // namespace WandererEntity
} // namespace app::classes::types
