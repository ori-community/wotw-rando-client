#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Timeout {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Timeout__Class** type_info;
        inline app::Timeout__Class* get_class() {
            return il2cpp::get_class<app::Timeout__Class>(type_info, "System.Threading", "Timeout");
        }
        inline app::Timeout* create() {
            return il2cpp::create_object<app::Timeout>(get_class());
        }
    } // namespace Timeout
} // namespace app::classes::types
