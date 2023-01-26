#pragma once
#include <Modloader/app/structs/HTTPRequestDataReceived_t.h>
#include <Modloader/app/structs/HTTPRequestDataReceived_t__Boxed.h>
#include <Modloader/app/structs/HTTPRequestDataReceived_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HTTPRequestDataReceived_t {
        inline app::HTTPRequestDataReceived_t__Class** type_info() {
            static app::HTTPRequestDataReceived_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HTTPRequestDataReceived_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HTTPRequestDataReceived_t__Class* get_class() {
            return il2cpp::get_class<app::HTTPRequestDataReceived_t__Class>(type_info(), "Steamworks", "HTTPRequestDataReceived_t");
        }
        inline app::HTTPRequestDataReceived_t* create() {
            return il2cpp::create_object<app::HTTPRequestDataReceived_t>(get_class());
        }
        inline app::HTTPRequestDataReceived_t__Boxed* box(app::HTTPRequestDataReceived_t value) {
            return il2cpp::box_value<app::HTTPRequestDataReceived_t__Boxed>(get_class(), value);
        }
    } // namespace HTTPRequestDataReceived_t
} // namespace app::classes::types
