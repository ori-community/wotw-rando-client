#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalFE {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalFE__Class** type_info;
        inline app::InternalFE__Class* get_class() {
            return il2cpp::get_class<app::InternalFE__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalFE");
        }
        inline app::InternalFE* create() {
            return il2cpp::create_object<app::InternalFE>(get_class());
        }
    } // namespace InternalFE
} // namespace app::classes::types
