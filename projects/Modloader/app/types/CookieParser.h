#pragma once
#include <Modloader/app/structs/CookieParser.h>
#include <Modloader/app/structs/CookieParser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CookieParser {
        inline app::CookieParser__Class** type_info() {
            static app::CookieParser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CookieParser__Class**)(modloader::win::memory::resolve_rva(0x047837C0));
            }
            return cache;
        }
        inline app::CookieParser__Class* get_class() {
            return il2cpp::get_class<app::CookieParser__Class>(type_info(), "System.Net", "CookieParser");
        }
        inline app::CookieParser* create() {
            return il2cpp::create_object<app::CookieParser>(get_class());
        }
    } // namespace CookieParser
} // namespace app::classes::types
