#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CookieException__Class.h>
#include <Modloader/app/structs/CookieException.h>

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
