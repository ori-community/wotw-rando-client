#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ControllerActionSetHandle_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ControllerActionSetHandle_t__Class** type_info;
        inline app::ControllerActionSetHandle_t__Class* get_class() {
            return il2cpp::get_class<app::ControllerActionSetHandle_t__Class>(type_info, "Steamworks", "ControllerActionSetHandle_t");
        }
        inline app::ControllerActionSetHandle_t* create() {
            return il2cpp::create_object<app::ControllerActionSetHandle_t>(get_class());
        }
        inline app::ControllerActionSetHandle_t__Boxed* box(app::ControllerActionSetHandle_t value) {
            return il2cpp::box_value<app::ControllerActionSetHandle_t__Boxed>(get_class(), value);
        }
        inline app::ControllerActionSetHandle_t__Array* create_array(int size) {
            return il2cpp::array_new<app::ControllerActionSetHandle_t__Array>(get_class(), size);
        }
        inline app::ControllerActionSetHandle_t__Array* create_array(const std::vector<app::ControllerActionSetHandle_t__Boxed>& items) {
            return il2cpp::array_new<app::ControllerActionSetHandle_t__Array>(get_class(), items);
        }
    } // namespace ControllerActionSetHandle_t
} // namespace app::classes::types
