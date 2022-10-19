#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace INestedSite {
        inline app::INestedSite__Class** type_info = (app::INestedSite__Class**)(modloader::win::memory::resolve_rva(0x0478B4C8));
        inline app::INestedSite__Class* get_class() {
            return il2cpp::get_class<app::INestedSite__Class>(type_info, "System.ComponentModel", "INestedSite");
        }
    } // namespace INestedSite
} // namespace app::classes::types
