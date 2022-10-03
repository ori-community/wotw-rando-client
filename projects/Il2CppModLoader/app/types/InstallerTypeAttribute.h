#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstallerTypeAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstallerTypeAttribute__Class** type_info;
        inline app::InstallerTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::InstallerTypeAttribute__Class>(type_info, "System.ComponentModel", "InstallerTypeAttribute");
        }
        inline app::InstallerTypeAttribute* create() {
            return il2cpp::create_object<app::InstallerTypeAttribute>(get_class());
        }
    } // namespace InstallerTypeAttribute
} // namespace app::classes::types
