#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerObjectInfoInit {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerObjectInfoInit__Class** type_info;
        inline app::SerObjectInfoInit__Class* get_class() {
            return il2cpp::get_class<app::SerObjectInfoInit__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit");
        }
        inline app::SerObjectInfoInit* create() {
            return il2cpp::create_object<app::SerObjectInfoInit>(get_class());
        }
    } // namespace SerObjectInfoInit
} // namespace app::classes::types
