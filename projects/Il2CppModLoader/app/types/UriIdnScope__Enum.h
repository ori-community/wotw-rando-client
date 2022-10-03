#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UriIdnScope__Enum {
        namespace {
            app::UriIdnScope__Enum__Class* type_info_ref = nullptr;
        }
        app::UriIdnScope__Enum__Class** type_info = &type_info_ref;
        inline app::UriIdnScope__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriIdnScope__Enum__Class>(type_info, "System", "UriIdnScope");
        }
        inline app::UriIdnScope__Enum* create() {
            return il2cpp::create_object<app::UriIdnScope__Enum>(get_class());
        }
    } // namespace UriIdnScope__Enum
} // namespace app::classes::types
