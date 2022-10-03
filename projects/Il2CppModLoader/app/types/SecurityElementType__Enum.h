#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityElementType__Enum {
        namespace {
            app::SecurityElementType__Enum__Class* type_info_ref = nullptr;
        }
        app::SecurityElementType__Enum__Class** type_info = &type_info_ref;
        inline app::SecurityElementType__Enum__Class* get_class() {
            return il2cpp::get_class<app::SecurityElementType__Enum__Class>(type_info, "System.Security", "SecurityElementType");
        }
        inline app::SecurityElementType__Enum* create() {
            return il2cpp::create_object<app::SecurityElementType__Enum>(get_class());
        }
    } // namespace SecurityElementType__Enum
} // namespace app::classes::types
