#pragma once
#include <Modloader/app/structs/CookieTokenizer.h>
#include <Modloader/app/structs/CookieTokenizer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CookieTokenizer {
        inline app::CookieTokenizer__Class** type_info() {
            static app::CookieTokenizer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CookieTokenizer__Class**)(modloader::win::memory::resolve_rva(0x0476AF70));
            }
            return cache;
        }
        inline app::CookieTokenizer__Class* get_class() {
            return il2cpp::get_class<app::CookieTokenizer__Class>(type_info(), "System.Net", "CookieTokenizer");
        }
        inline app::CookieTokenizer* create() {
            return il2cpp::create_object<app::CookieTokenizer>(get_class());
        }
    } // namespace CookieTokenizer
} // namespace app::classes::types
