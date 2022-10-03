#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JumpSustainHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JumpSustainHelper__Class** type_info;
        inline app::JumpSustainHelper__Class* get_class() {
            return il2cpp::get_class<app::JumpSustainHelper__Class>(type_info, "", "JumpSustainHelper");
        }
        inline app::JumpSustainHelper* create() {
            return il2cpp::create_object<app::JumpSustainHelper>(get_class());
        }
    } // namespace JumpSustainHelper
} // namespace app::classes::types
