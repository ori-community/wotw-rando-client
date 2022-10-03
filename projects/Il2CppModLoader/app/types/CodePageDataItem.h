#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CodePageDataItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CodePageDataItem__Class** type_info;
        inline app::CodePageDataItem__Class* get_class() {
            return il2cpp::get_class<app::CodePageDataItem__Class>(type_info, "System.Globalization", "CodePageDataItem");
        }
        inline app::CodePageDataItem* create() {
            return il2cpp::create_object<app::CodePageDataItem>(get_class());
        }
    } // namespace CodePageDataItem
} // namespace app::classes::types
