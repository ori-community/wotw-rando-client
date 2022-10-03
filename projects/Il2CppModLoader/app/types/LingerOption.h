#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LingerOption {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LingerOption__Class** type_info;
        inline app::LingerOption__Class* get_class() {
            return il2cpp::get_class<app::LingerOption__Class>(type_info, "System.Net.Sockets", "LingerOption");
        }
        inline app::LingerOption* create() {
            return il2cpp::create_object<app::LingerOption>(get_class());
        }
    } // namespace LingerOption
} // namespace app::classes::types
