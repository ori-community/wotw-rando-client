#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Alert_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Alert_1__Class** type_info;
        inline app::Alert_1__Class* get_class() {
            return il2cpp::get_class<app::Alert_1__Class>(type_info, "Mono.Security.Interface", "Alert");
        }
        inline app::Alert_1* create() {
            return il2cpp::create_object<app::Alert_1>(get_class());
        }
    } // namespace Alert_1
} // namespace app::classes::types
