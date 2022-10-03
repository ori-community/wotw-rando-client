#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerObjectReferences {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerObjectReferences__Class** type_info;
        inline app::ServerObjectReferences__Class* get_class() {
            return il2cpp::get_class<app::ServerObjectReferences__Class>(type_info, "", "ServerObjectReferences");
        }
        inline app::ServerObjectReferences* create() {
            return il2cpp::create_object<app::ServerObjectReferences>(get_class());
        }
    } // namespace ServerObjectReferences
} // namespace app::classes::types
