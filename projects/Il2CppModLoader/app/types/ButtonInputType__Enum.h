#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ButtonInputType__Enum {
        namespace {
            app::ButtonInputType__Enum__Class* type_info_ref = nullptr;
        }
        app::ButtonInputType__Enum__Class** type_info = &type_info_ref;
        inline app::ButtonInputType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ButtonInputType__Enum__Class>(type_info, "Moon.ComboSystem", "ButtonInputType");
        }
        inline app::ButtonInputType__Enum* create() {
            return il2cpp::create_object<app::ButtonInputType__Enum>(get_class());
        }
    } // namespace ButtonInputType__Enum
} // namespace app::classes::types
