#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CookieCollection {
        inline app::CookieCollection__Class** type_info = (app::CookieCollection__Class**)(modloader::win::memory::resolve_rva(0x047923A8));
        inline app::CookieCollection__Class* get_class() {
            return il2cpp::get_class<app::CookieCollection__Class>(type_info, "System.Net", "CookieCollection");
        }
        inline app::CookieCollection* create() {
            return il2cpp::create_object<app::CookieCollection>(get_class());
        }
    } // namespace CookieCollection
} // namespace app::classes::types
