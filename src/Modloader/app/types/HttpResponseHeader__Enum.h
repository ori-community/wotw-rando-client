#pragma once
#include <Modloader/app/structs/HttpResponseHeader__Enum.h>
#include <Modloader/app/structs/HttpResponseHeader__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpResponseHeader__Enum {
        inline app::HttpResponseHeader__Enum__Class** type_info() {
            static app::HttpResponseHeader__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpResponseHeader__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpResponseHeader__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpResponseHeader__Enum__Class>(type_info(), "System.Net", "HttpResponseHeader");
        }
        inline app::HttpResponseHeader__Enum* create() {
            return il2cpp::create_object<app::HttpResponseHeader__Enum>(get_class());
        }
    } // namespace HttpResponseHeader__Enum
} // namespace app::classes::types
