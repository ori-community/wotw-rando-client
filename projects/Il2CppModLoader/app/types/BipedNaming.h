#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BipedNaming {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BipedNaming__Class** type_info;
        inline app::BipedNaming__Class* get_class() {
            return il2cpp::get_class<app::BipedNaming__Class>(type_info, "RootMotion", "BipedNaming");
        }
        inline app::BipedNaming* create() {
            return il2cpp::create_object<app::BipedNaming>(get_class());
        }
    } // namespace BipedNaming
} // namespace app::classes::types
