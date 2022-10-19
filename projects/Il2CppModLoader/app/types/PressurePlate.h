#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PressurePlate {
        namespace {
            inline app::PressurePlate__Class* type_info_ref = nullptr;
        }
        inline app::PressurePlate__Class** type_info = &type_info_ref;
        inline app::PressurePlate__Class* get_class() {
            return il2cpp::get_class<app::PressurePlate__Class>(type_info, "", "PressurePlate");
        }
        inline app::PressurePlate* create() {
            return il2cpp::create_object<app::PressurePlate>(get_class());
        }
    } // namespace PressurePlate
} // namespace app::classes::types
