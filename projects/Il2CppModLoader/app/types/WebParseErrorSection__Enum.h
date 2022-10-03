#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebParseErrorSection__Enum {
        namespace {
            app::WebParseErrorSection__Enum__Class* type_info_ref = nullptr;
        }
        app::WebParseErrorSection__Enum__Class** type_info = &type_info_ref;
        inline app::WebParseErrorSection__Enum__Class* get_class() {
            return il2cpp::get_class<app::WebParseErrorSection__Enum__Class>(type_info, "System.Net", "WebParseErrorSection");
        }
        inline app::WebParseErrorSection__Enum* create() {
            return il2cpp::create_object<app::WebParseErrorSection__Enum>(get_class());
        }
    } // namespace WebParseErrorSection__Enum
} // namespace app::classes::types
