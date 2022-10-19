#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CodePageDataItem {
        inline app::CodePageDataItem__Class** type_info = (app::CodePageDataItem__Class**)(modloader::win::memory::resolve_rva(0x04783C40));
        inline app::CodePageDataItem__Class* get_class() {
            return il2cpp::get_class<app::CodePageDataItem__Class>(type_info, "System.Globalization", "CodePageDataItem");
        }
        inline app::CodePageDataItem* create() {
            return il2cpp::create_object<app::CodePageDataItem>(get_class());
        }
    } // namespace CodePageDataItem
} // namespace app::classes::types
