#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CookieException {
        inline app::CookieException__Class** type_info = (app::CookieException__Class**)(modloader::win::memory::resolve_rva(0x04714B08));
        inline app::CookieException__Class* get_class() {
            return il2cpp::get_class<app::CookieException__Class>(type_info, "System.Net", "CookieException");
        }
        inline app::CookieException* create() {
            return il2cpp::create_object<app::CookieException>(get_class());
        }
    } // namespace CookieException
} // namespace app::classes::types
