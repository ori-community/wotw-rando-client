#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProtectiveLightCone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ProtectiveLightCone__Class** type_info;
        inline app::ProtectiveLightCone__Class* get_class() {
            return il2cpp::get_class<app::ProtectiveLightCone__Class>(type_info, "", "ProtectiveLightCone");
        }
        inline app::ProtectiveLightCone* create() {
            return il2cpp::create_object<app::ProtectiveLightCone>(get_class());
        }
        inline app::ProtectiveLightCone__Array* create_array(int size) {
            return il2cpp::array_new<app::ProtectiveLightCone__Array>(get_class(), size);
        }
    } // namespace ProtectiveLightCone
} // namespace app::classes::types
