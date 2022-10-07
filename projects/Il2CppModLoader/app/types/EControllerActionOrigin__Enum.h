#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EControllerActionOrigin__Enum {
        namespace {
            app::EControllerActionOrigin__Enum__Class* type_info_ref = nullptr;
        }
        app::EControllerActionOrigin__Enum__Class** type_info = &type_info_ref;
        inline app::EControllerActionOrigin__Enum__Class* get_class() {
            return il2cpp::get_class<app::EControllerActionOrigin__Enum__Class>(type_info, "Steamworks", "EControllerActionOrigin");
        }
        inline app::EControllerActionOrigin__Enum* create() {
            return il2cpp::create_object<app::EControllerActionOrigin__Enum>(get_class());
        }
        inline app::EControllerActionOrigin__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::EControllerActionOrigin__Enum__Array>(get_class(), size);
        }
        inline app::EControllerActionOrigin__Enum__Array* create_array(const std::vector<app::EControllerActionOrigin__Enum*>& items) {
            return il2cpp::array_new<app::EControllerActionOrigin__Enum__Array>(get_class(), items);
        }
    } // namespace EControllerActionOrigin__Enum
} // namespace app::classes::types
