#pragma once
#include <Modloader/app/structs/WebParseError.h>
#include <Modloader/app/structs/WebParseError__Boxed.h>
#include <Modloader/app/structs/WebParseError__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebParseError {
        inline app::WebParseError__Class** type_info() {
            static app::WebParseError__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WebParseError__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WebParseError__Class* get_class() {
            return il2cpp::get_class<app::WebParseError__Class>(type_info(), "System.Net", "WebParseError");
        }
        inline app::WebParseError* create() {
            return il2cpp::create_object<app::WebParseError>(get_class());
        }
        inline app::WebParseError__Boxed* box(app::WebParseError value) {
            return il2cpp::box_value<app::WebParseError__Boxed>(get_class(), value);
        }
    } // namespace WebParseError
} // namespace app::classes::types
