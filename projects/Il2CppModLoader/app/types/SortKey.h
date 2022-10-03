#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SortKey {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SortKey__Class** type_info;
        inline app::SortKey__Class* get_class() {
            return il2cpp::get_class<app::SortKey__Class>(type_info, "System.Globalization", "SortKey");
        }
        inline app::SortKey* create() {
            return il2cpp::create_object<app::SortKey>(get_class());
        }
    } // namespace SortKey
} // namespace app::classes::types
