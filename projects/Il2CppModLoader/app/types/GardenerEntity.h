#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GardenerEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GardenerEntity__Class** type_info;
        inline app::GardenerEntity__Class* get_class() {
            return il2cpp::get_class<app::GardenerEntity__Class>(type_info, "", "GardenerEntity");
        }
        inline app::GardenerEntity* create() {
            return il2cpp::create_object<app::GardenerEntity>(get_class());
        }
    } // namespace GardenerEntity
} // namespace app::classes::types
