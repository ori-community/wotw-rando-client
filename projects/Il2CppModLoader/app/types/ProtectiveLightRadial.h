#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProtectiveLightRadial {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProtectiveLightRadial__Class** type_info;
        inline app::ProtectiveLightRadial__Class* get_class() {
            return il2cpp::get_class<app::ProtectiveLightRadial__Class>(type_info, "", "ProtectiveLightRadial");
        }
        inline app::ProtectiveLightRadial* create() {
            return il2cpp::create_object<app::ProtectiveLightRadial>(get_class());
        }
        inline app::ProtectiveLightRadial__Array* create_array(int size) {
            return il2cpp::array_new<app::ProtectiveLightRadial__Array>(get_class(), size);
        }
    } // namespace ProtectiveLightRadial
} // namespace app::classes::types
