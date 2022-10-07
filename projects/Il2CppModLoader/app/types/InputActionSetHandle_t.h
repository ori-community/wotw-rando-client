#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputActionSetHandle_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InputActionSetHandle_t__Class** type_info;
        inline app::InputActionSetHandle_t__Class* get_class() {
            return il2cpp::get_class<app::InputActionSetHandle_t__Class>(type_info, "Steamworks", "InputActionSetHandle_t");
        }
        inline app::InputActionSetHandle_t* create() {
            return il2cpp::create_object<app::InputActionSetHandle_t>(get_class());
        }
        inline app::InputActionSetHandle_t__Boxed* box(app::InputActionSetHandle_t value) {
            return il2cpp::box_value<app::InputActionSetHandle_t__Boxed>(get_class(), value);
        }
        inline app::InputActionSetHandle_t__Array* create_array(int size) {
            return il2cpp::array_new<app::InputActionSetHandle_t__Array>(get_class(), size);
        }
        inline app::InputActionSetHandle_t__Array* create_array(const std::vector<app::InputActionSetHandle_t>& items) {
            return il2cpp::array_new<app::InputActionSetHandle_t__Array>(get_class(), items);
        }
    } // namespace InputActionSetHandle_t
} // namespace app::classes::types
