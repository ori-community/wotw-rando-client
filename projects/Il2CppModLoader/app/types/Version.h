#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Version {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Version__Class** type_info;
        inline app::Version__Class* get_class() {
            return il2cpp::get_class<app::Version__Class>(type_info, "System", "Version");
        }
        inline app::Version* create() {
            return il2cpp::create_object<app::Version>(get_class());
        }
    } // namespace Version
} // namespace app::classes::types
