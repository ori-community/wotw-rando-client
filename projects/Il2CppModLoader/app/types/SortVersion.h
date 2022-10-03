#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SortVersion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SortVersion__Class** type_info;
        inline app::SortVersion__Class* get_class() {
            return il2cpp::get_class<app::SortVersion__Class>(type_info, "System.Globalization", "SortVersion");
        }
        inline app::SortVersion* create() {
            return il2cpp::create_object<app::SortVersion>(get_class());
        }
    } // namespace SortVersion
} // namespace app::classes::types
