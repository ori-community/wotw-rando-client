#pragma once
#include <Modloader/app/structs/HTTPRequestHeadersReceived_t.h>
#include <Modloader/app/structs/HTTPRequestHeadersReceived_t__Boxed.h>
#include <Modloader/app/structs/HTTPRequestHeadersReceived_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HTTPRequestHeadersReceived_t {
        inline app::HTTPRequestHeadersReceived_t__Class** type_info() {
            static app::HTTPRequestHeadersReceived_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HTTPRequestHeadersReceived_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HTTPRequestHeadersReceived_t__Class* get_class() {
            return il2cpp::get_class<app::HTTPRequestHeadersReceived_t__Class>(type_info(), "Steamworks", "HTTPRequestHeadersReceived_t");
        }
        inline app::HTTPRequestHeadersReceived_t* create() {
            return il2cpp::create_object<app::HTTPRequestHeadersReceived_t>(get_class());
        }
        inline app::HTTPRequestHeadersReceived_t__Boxed* box(app::HTTPRequestHeadersReceived_t value) {
            return il2cpp::box_value<app::HTTPRequestHeadersReceived_t__Boxed>(get_class(), value);
        }
    } // namespace HTTPRequestHeadersReceived_t
} // namespace app::classes::types
