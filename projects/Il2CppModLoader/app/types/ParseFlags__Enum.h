#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParseFlags__Enum {
        namespace {
            app::ParseFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::ParseFlags__Enum__Class** type_info = &type_info_ref;
        inline app::ParseFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::ParseFlags__Enum__Class>(type_info, "System", "ParseFlags");
        }
        inline app::ParseFlags__Enum* create() {
            return il2cpp::create_object<app::ParseFlags__Enum>(get_class());
        }
    } // namespace ParseFlags__Enum
} // namespace app::classes::types
