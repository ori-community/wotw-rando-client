#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MortarEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MortarEntity__Class** type_info;
        inline app::MortarEntity__Class* get_class() {
            return il2cpp::get_class<app::MortarEntity__Class>(type_info, "", "MortarEntity");
        }
        inline app::MortarEntity* create() {
            return il2cpp::create_object<app::MortarEntity>(get_class());
        }
    } // namespace MortarEntity
} // namespace app::classes::types
