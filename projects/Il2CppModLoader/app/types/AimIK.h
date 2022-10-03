#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AimIK {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AimIK__Class** type_info;
        inline app::AimIK__Class* get_class() {
            return il2cpp::get_class<app::AimIK__Class>(type_info, "RootMotion.FinalIK", "AimIK");
        }
        inline app::AimIK* create() {
            return il2cpp::create_object<app::AimIK>(get_class());
        }
    } // namespace AimIK
} // namespace app::classes::types
