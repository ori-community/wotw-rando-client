#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextAlignment__Enum {
        namespace {
            app::TextAlignment__Enum__Class* type_info_ref = nullptr;
        }
        app::TextAlignment__Enum__Class** type_info = &type_info_ref;
        inline app::TextAlignment__Enum__Class* get_class() {
            return il2cpp::get_class<app::TextAlignment__Enum__Class>(type_info, "UnityEngine", "TextAlignment");
        }
        inline app::TextAlignment__Enum* create() {
            return il2cpp::create_object<app::TextAlignment__Enum>(get_class());
        }
    } // namespace TextAlignment__Enum
} // namespace app::classes::types
