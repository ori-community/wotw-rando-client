#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HTTPRequestHeadersReceived_t {
        namespace {
            inline app::HTTPRequestHeadersReceived_t__Class* type_info_ref = nullptr;
        }
        inline app::HTTPRequestHeadersReceived_t__Class** type_info = &type_info_ref;
        inline app::HTTPRequestHeadersReceived_t__Class* get_class() {
            return il2cpp::get_class<app::HTTPRequestHeadersReceived_t__Class>(type_info, "Steamworks", "HTTPRequestHeadersReceived_t");
        }
        inline app::HTTPRequestHeadersReceived_t* create() {
            return il2cpp::create_object<app::HTTPRequestHeadersReceived_t>(get_class());
        }
        inline app::HTTPRequestHeadersReceived_t__Boxed* box(app::HTTPRequestHeadersReceived_t value) {
            return il2cpp::box_value<app::HTTPRequestHeadersReceived_t__Boxed>(get_class(), value);
        }
    } // namespace HTTPRequestHeadersReceived_t
} // namespace app::classes::types
