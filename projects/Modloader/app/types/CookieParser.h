#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CookieParser {
        inline app::CookieParser__Class** type_info = (app::CookieParser__Class**)(modloader::win::memory::resolve_rva(0x047837C0));
        inline app::CookieParser__Class* get_class() {
            return il2cpp::get_class<app::CookieParser__Class>(type_info, "System.Net", "CookieParser");
        }
        inline app::CookieParser* create() {
            return il2cpp::create_object<app::CookieParser>(get_class());
        }
    } // namespace CookieParser
} // namespace app::classes::types
