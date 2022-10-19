#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SortVersion {
        inline app::SortVersion__Class** type_info = (app::SortVersion__Class**)(modloader::win::memory::resolve_rva(0x04736A70));
        inline app::SortVersion__Class* get_class() {
            return il2cpp::get_class<app::SortVersion__Class>(type_info, "System.Globalization", "SortVersion");
        }
        inline app::SortVersion* create() {
            return il2cpp::create_object<app::SortVersion>(get_class());
        }
    } // namespace SortVersion
} // namespace app::classes::types
