#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MulticastOption {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MulticastOption__Class** type_info;
        inline app::MulticastOption__Class* get_class() {
            return il2cpp::get_class<app::MulticastOption__Class>(type_info, "System.Net.Sockets", "MulticastOption");
        }
        inline app::MulticastOption* create() {
            return il2cpp::create_object<app::MulticastOption>(get_class());
        }
    } // namespace MulticastOption
} // namespace app::classes::types
