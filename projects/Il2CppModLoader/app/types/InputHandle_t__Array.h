#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InputHandle_t__Array {
        namespace {
            app::InputHandle_t__Array__Class* type_info_ref = nullptr;
        }
        app::InputHandle_t__Array__Class** type_info = &type_info_ref;
        inline app::InputHandle_t__Array__Class* get_class() {
            return il2cpp::get_class<app::InputHandle_t__Array__Class>(type_info, "Steamworks", "InputHandle_t[]");
        }
        inline app::InputHandle_t__Array* create() {
            return il2cpp::create_object<app::InputHandle_t__Array>(get_class());
        }
    } // namespace InputHandle_t__Array
} // namespace app::classes::types
