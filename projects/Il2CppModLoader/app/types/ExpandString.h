#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExpandString {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExpandString__Class** type_info;
        inline app::ExpandString__Class* get_class() {
            return il2cpp::get_class<app::ExpandString__Class>(type_info, "Microsoft.Win32", "ExpandString");
        }
        inline app::ExpandString* create() {
            return il2cpp::create_object<app::ExpandString>(get_class());
        }
    } // namespace ExpandString
} // namespace app::classes::types
