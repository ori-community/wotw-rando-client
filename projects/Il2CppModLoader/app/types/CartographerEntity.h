#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartographerEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CartographerEntity__Class** type_info;
        inline app::CartographerEntity__Class* get_class() {
            return il2cpp::get_class<app::CartographerEntity__Class>(type_info, "", "CartographerEntity");
        }
        inline app::CartographerEntity* create() {
            return il2cpp::create_object<app::CartographerEntity>(get_class());
        }
    } // namespace CartographerEntity
} // namespace app::classes::types
