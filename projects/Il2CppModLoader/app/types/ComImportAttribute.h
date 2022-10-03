#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ComImportAttribute {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ComImportAttribute__Class** type_info;
        inline app::ComImportAttribute__Class* get_class() {
            return il2cpp::get_class<app::ComImportAttribute__Class>(type_info, "System.Runtime.InteropServices", "ComImportAttribute");
        }
        inline app::ComImportAttribute* create() {
            return il2cpp::create_object<app::ComImportAttribute>(get_class());
        }
    } // namespace ComImportAttribute
} // namespace app::classes::types
