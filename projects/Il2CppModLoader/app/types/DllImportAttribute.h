#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DllImportAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DllImportAttribute__Class** type_info;
        inline app::DllImportAttribute__Class* get_class() {
            return il2cpp::get_class<app::DllImportAttribute__Class>(type_info, "System.Runtime.InteropServices", "DllImportAttribute");
        }
        inline app::DllImportAttribute* create() {
            return il2cpp::create_object<app::DllImportAttribute>(get_class());
        }
    } // namespace DllImportAttribute
} // namespace app::classes::types
