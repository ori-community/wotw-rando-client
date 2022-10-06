#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Button__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Button__Enum__Class** type_info;
        inline app::Button__Enum__Class* get_class() {
            return il2cpp::get_class<app::Button__Enum__Class>(type_info, "frameworks.Switch", "Button");
        }
        inline app::Button__Enum* create() {
            return il2cpp::create_object<app::Button__Enum>(get_class());
        }
        inline app::Button__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::Button__Enum__Array>(get_class(), size);
        }
        inline app::Button__Enum__Array* create_array(const std::vector<app::Button__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::Button__Enum__Array>(get_class(), items);
        }
    } // namespace Button__Enum
} // namespace app::classes::types
