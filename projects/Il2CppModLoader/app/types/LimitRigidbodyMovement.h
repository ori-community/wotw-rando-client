#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LimitRigidbodyMovement {
        namespace {
            inline app::LimitRigidbodyMovement__Class* type_info_ref = nullptr;
        }
        inline app::LimitRigidbodyMovement__Class** type_info = &type_info_ref;
        inline app::LimitRigidbodyMovement__Class* get_class() {
            return il2cpp::get_class<app::LimitRigidbodyMovement__Class>(type_info, "", "LimitRigidbodyMovement");
        }
        inline app::LimitRigidbodyMovement* create() {
            return il2cpp::create_object<app::LimitRigidbodyMovement>(get_class());
        }
    } // namespace LimitRigidbodyMovement
} // namespace app::classes::types
