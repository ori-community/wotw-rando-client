#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControllerHandle_t__Array {
        namespace {
            inline app::ControllerHandle_t__Array__Class* type_info_ref = nullptr;
        }
        inline app::ControllerHandle_t__Array__Class** type_info = &type_info_ref;
        inline app::ControllerHandle_t__Array__Class* get_class() {
            return il2cpp::get_class<app::ControllerHandle_t__Array__Class>(type_info, "Steamworks", "ControllerHandle_t[]");
        }
        inline app::ControllerHandle_t__Array* create() {
            return il2cpp::create_object<app::ControllerHandle_t__Array>(get_class());
        }
    } // namespace ControllerHandle_t__Array
} // namespace app::classes::types
