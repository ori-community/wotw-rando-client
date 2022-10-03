#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OperatingSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OperatingSystem__Class** type_info;
        inline app::OperatingSystem__Class* get_class() {
            return il2cpp::get_class<app::OperatingSystem__Class>(type_info, "System", "OperatingSystem");
        }
        inline app::OperatingSystem* create() {
            return il2cpp::create_object<app::OperatingSystem>(get_class());
        }
    } // namespace OperatingSystem
} // namespace app::classes::types
