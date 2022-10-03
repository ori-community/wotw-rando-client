#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpResponseHeader__Enum {
        namespace {
            app::HttpResponseHeader__Enum__Class* type_info_ref = nullptr;
        }
        app::HttpResponseHeader__Enum__Class** type_info = &type_info_ref;
        inline app::HttpResponseHeader__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpResponseHeader__Enum__Class>(type_info, "System.Net", "HttpResponseHeader");
        }
        inline app::HttpResponseHeader__Enum* create() {
            return il2cpp::create_object<app::HttpResponseHeader__Enum>(get_class());
        }
    } // namespace HttpResponseHeader__Enum
} // namespace app::classes::types
