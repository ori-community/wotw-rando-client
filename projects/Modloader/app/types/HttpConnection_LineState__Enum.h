#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HttpConnection_LineState__Enum {
        namespace {
            inline app::HttpConnection_LineState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::HttpConnection_LineState__Enum__Class** type_info = &type_info_ref;
        inline app::HttpConnection_LineState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::HttpConnection_LineState__Enum__Class>(type_info, "System.Net", "HttpConnection", "LineState");
        }
        inline app::HttpConnection_LineState__Enum* create() {
            return il2cpp::create_object<app::HttpConnection_LineState__Enum>(get_class());
        }
    } // namespace HttpConnection_LineState__Enum
} // namespace app::classes::types
