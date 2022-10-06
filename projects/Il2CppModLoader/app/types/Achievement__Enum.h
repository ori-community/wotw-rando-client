#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Achievement__Enum {
        namespace {
            app::Achievement__Enum__Class* type_info_ref = nullptr;
        }
        app::Achievement__Enum__Class** type_info = &type_info_ref;
        inline app::Achievement__Enum__Class* get_class() {
            return il2cpp::get_class<app::Achievement__Enum__Class>(type_info, "", "Achievement");
        }
        inline app::Achievement__Enum* create() {
            return il2cpp::create_object<app::Achievement__Enum>(get_class());
        }
        inline app::Achievement__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Achievement__Enum__Array>(get_class(), size);
        }
        inline app::Achievement__Enum__Array* create_array(const std::vector<app::Achievement__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::Achievement__Enum__Array>(get_class(), items);
        }
    } // namespace Achievement__Enum
} // namespace app::classes::types
