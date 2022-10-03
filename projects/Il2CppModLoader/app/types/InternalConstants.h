#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalConstants {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalConstants__Class** type_info;
        inline app::InternalConstants__Class* get_class() {
            return il2cpp::get_class<app::InternalConstants__Class>(type_info, "Ionic.Zlib", "InternalConstants");
        }
        inline app::InternalConstants* create() {
            return il2cpp::create_object<app::InternalConstants>(get_class());
        }
    } // namespace InternalConstants
} // namespace app::classes::types
