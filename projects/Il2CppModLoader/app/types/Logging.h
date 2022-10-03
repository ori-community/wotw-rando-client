#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Logging {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Logging__Class** type_info;
        inline app::Logging__Class* get_class() {
            return il2cpp::get_class<app::Logging__Class>(type_info, "System.Net", "Logging");
        }
        inline app::Logging* create() {
            return il2cpp::create_object<app::Logging>(get_class());
        }
    } // namespace Logging
} // namespace app::classes::types
