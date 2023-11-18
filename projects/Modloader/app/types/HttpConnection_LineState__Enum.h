#pragma once
#include <Modloader/app/structs/HttpConnection_LineState__Enum.h>
#include <Modloader/app/structs/HttpConnection_LineState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HttpConnection_LineState__Enum {
        inline app::HttpConnection_LineState__Enum__Class** type_info() {
            static app::HttpConnection_LineState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HttpConnection_LineState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HttpConnection_LineState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpConnection_LineState__Enum__Class>(type_info(), "System.Net", "HttpConnection", "LineState");
        }
        inline app::HttpConnection_LineState__Enum* create() {
            return il2cpp::create_object<app::HttpConnection_LineState__Enum>(get_class());
        }
    } // namespace HttpConnection_LineState__Enum
} // namespace app::classes::types
