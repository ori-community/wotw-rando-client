#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyAction__Enum {
        namespace {
            app::KeyAction__Enum__Class* type_info_ref = nullptr;
        }
        app::KeyAction__Enum__Class** type_info = &type_info_ref;
        inline app::KeyAction__Enum__Class* get_class() {
            return il2cpp::get_class<app::KeyAction__Enum__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "KeyAction");
        }
        inline app::KeyAction__Enum* create() {
            return il2cpp::create_object<app::KeyAction__Enum>(get_class());
        }
    } // namespace KeyAction__Enum
} // namespace app::classes::types
