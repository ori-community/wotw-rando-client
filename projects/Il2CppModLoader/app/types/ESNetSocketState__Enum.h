#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ESNetSocketState__Enum {
        namespace {
            app::ESNetSocketState__Enum__Class* type_info_ref = nullptr;
        }
        app::ESNetSocketState__Enum__Class** type_info = &type_info_ref;
        inline app::ESNetSocketState__Enum__Class* get_class() {
            return il2cpp::get_class<app::ESNetSocketState__Enum__Class>(type_info, "Steamworks", "ESNetSocketState");
        }
        inline app::ESNetSocketState__Enum* create() {
            return il2cpp::create_object<app::ESNetSocketState__Enum>(get_class());
        }
    } // namespace ESNetSocketState__Enum
} // namespace app::classes::types
