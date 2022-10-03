#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InternalInflateConstants {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InternalInflateConstants__Class** type_info;
        inline app::InternalInflateConstants__Class* get_class() {
            return il2cpp::get_class<app::InternalInflateConstants__Class>(type_info, "Ionic.Zlib", "InternalInflateConstants");
        }
        inline app::InternalInflateConstants* create() {
            return il2cpp::create_object<app::InternalInflateConstants>(get_class());
        }
    } // namespace InternalInflateConstants
} // namespace app::classes::types
