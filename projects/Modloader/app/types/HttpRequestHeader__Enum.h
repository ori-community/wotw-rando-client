#pragma once
#include <Modloader/app/structs/HttpRequestHeader__Enum.h>
#include <Modloader/app/structs/HttpRequestHeader__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpRequestHeader__Enum {
        inline app::HttpRequestHeader__Enum__Class** type_info() {
            static app::HttpRequestHeader__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpRequestHeader__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpRequestHeader__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestHeader__Enum__Class>(type_info(), "System.Net", "HttpRequestHeader");
        }
        inline app::HttpRequestHeader__Enum* create() {
            return il2cpp::create_object<app::HttpRequestHeader__Enum>(get_class());
        }
    } // namespace HttpRequestHeader__Enum
} // namespace app::classes::types
