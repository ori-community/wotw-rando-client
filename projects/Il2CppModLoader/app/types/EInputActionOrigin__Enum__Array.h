#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EInputActionOrigin__Enum__Array {
        namespace {
            app::EInputActionOrigin__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::EInputActionOrigin__Enum__Array__Class** type_info = &type_info_ref;
        inline app::EInputActionOrigin__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::EInputActionOrigin__Enum__Array__Class>(type_info, "Steamworks", "EInputActionOrigin[]");
        }
        inline app::EInputActionOrigin__Enum__Array* create() {
            return il2cpp::create_object<app::EInputActionOrigin__Enum__Array>(get_class());
        }
    } // namespace EInputActionOrigin__Enum__Array
} // namespace app::classes::types
