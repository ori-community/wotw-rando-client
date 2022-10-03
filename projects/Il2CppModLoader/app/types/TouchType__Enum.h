#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TouchType__Enum {
        namespace {
            app::TouchType__Enum__Class* type_info_ref = nullptr;
        }
        app::TouchType__Enum__Class** type_info = &type_info_ref;
        inline app::TouchType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TouchType__Enum__Class>(type_info, "UnityEngine", "TouchType");
        }
        inline app::TouchType__Enum* create() {
            return il2cpp::create_object<app::TouchType__Enum>(get_class());
        }
    } // namespace TouchType__Enum
} // namespace app::classes::types
