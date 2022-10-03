#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Dns {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Dns__Class** type_info;
        inline app::Dns__Class* get_class() {
            return il2cpp::get_class<app::Dns__Class>(type_info, "System.Net", "Dns");
        }
        inline app::Dns* create() {
            return il2cpp::create_object<app::Dns>(get_class());
        }
    } // namespace Dns
} // namespace app::classes::types
