#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharSet__Enum {
        namespace {
            app::CharSet__Enum__Class* type_info_ref = nullptr;
        }
        app::CharSet__Enum__Class** type_info = &type_info_ref;
        inline app::CharSet__Enum__Class* get_class() {
            return il2cpp::get_class<app::CharSet__Enum__Class>(type_info, "System.Runtime.InteropServices", "CharSet");
        }
        inline app::CharSet__Enum* create() {
            return il2cpp::create_object<app::CharSet__Enum>(get_class());
        }
    } // namespace CharSet__Enum
} // namespace app::classes::types
