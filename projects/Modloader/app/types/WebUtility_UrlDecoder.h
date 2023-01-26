#pragma once
#include <Modloader/app/structs/WebUtility_UrlDecoder.h>
#include <Modloader/app/structs/WebUtility_UrlDecoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebUtility_UrlDecoder {
        inline app::WebUtility_UrlDecoder__Class** type_info() {
            static app::WebUtility_UrlDecoder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebUtility_UrlDecoder__Class**)(modloader::win::memory::resolve_rva(0x04759950));
            }
            return cache;
        }
        inline app::WebUtility_UrlDecoder__Class* get_class() {
            return il2cpp::get_nested_class<app::WebUtility_UrlDecoder__Class>(type_info(), "System.Net", "WebUtility", "UrlDecoder");
        }
        inline app::WebUtility_UrlDecoder* create() {
            return il2cpp::create_object<app::WebUtility_UrlDecoder>(get_class());
        }
    } // namespace WebUtility_UrlDecoder
} // namespace app::classes::types
