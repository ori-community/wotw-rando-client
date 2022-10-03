#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpRequestHeader__Enum {
        namespace {
            app::HttpRequestHeader__Enum__Class* type_info_ref = nullptr;
        }
        app::HttpRequestHeader__Enum__Class** type_info = &type_info_ref;
        inline app::HttpRequestHeader__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpRequestHeader__Enum__Class>(type_info, "System.Net", "HttpRequestHeader");
        }
        inline app::HttpRequestHeader__Enum* create() {
            return il2cpp::create_object<app::HttpRequestHeader__Enum>(get_class());
        }
    } // namespace HttpRequestHeader__Enum
} // namespace app::classes::types
