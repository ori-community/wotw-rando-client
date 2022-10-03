#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasballEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GasballEntity__Class** type_info;
        inline app::GasballEntity__Class* get_class() {
            return il2cpp::get_class<app::GasballEntity__Class>(type_info, "", "GasballEntity");
        }
        inline app::GasballEntity* create() {
            return il2cpp::create_object<app::GasballEntity>(get_class());
        }
    } // namespace GasballEntity
} // namespace app::classes::types
