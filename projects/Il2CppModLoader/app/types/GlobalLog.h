#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GlobalLog {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GlobalLog__Class** type_info;
        inline app::GlobalLog__Class* get_class() {
            return il2cpp::get_class<app::GlobalLog__Class>(type_info, "System.Net", "GlobalLog");
        }
        inline app::GlobalLog* create() {
            return il2cpp::create_object<app::GlobalLog>(get_class());
        }
    } // namespace GlobalLog
} // namespace app::classes::types
