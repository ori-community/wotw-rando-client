#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WriteState__Enum {
        namespace {
            app::WriteState__Enum__Class* type_info_ref = nullptr;
        }
        app::WriteState__Enum__Class** type_info = &type_info_ref;
        inline app::WriteState__Enum__Class* get_class() {
            return il2cpp::get_class<app::WriteState__Enum__Class>(type_info, "System.Xml", "WriteState");
        }
        inline app::WriteState__Enum* create() {
            return il2cpp::create_object<app::WriteState__Enum>(get_class());
        }
        inline app::WriteState__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::WriteState__Enum__Array>(get_class(), size);
        }
        inline app::WriteState__Enum__Array* create_array(const std::vector<app::WriteState__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::WriteState__Enum__Array>(get_class(), items);
        }
    } // namespace WriteState__Enum
} // namespace app::classes::types
