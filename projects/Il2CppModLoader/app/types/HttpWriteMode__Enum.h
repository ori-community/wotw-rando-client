#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpWriteMode__Enum {
        namespace {
            app::HttpWriteMode__Enum__Class* type_info_ref = nullptr;
        }
        app::HttpWriteMode__Enum__Class** type_info = &type_info_ref;
        inline app::HttpWriteMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::HttpWriteMode__Enum__Class>(type_info, "System.Net", "HttpWriteMode");
        }
        inline app::HttpWriteMode__Enum* create() {
            return il2cpp::create_object<app::HttpWriteMode__Enum>(get_class());
        }
    } // namespace HttpWriteMode__Enum
} // namespace app::classes::types
