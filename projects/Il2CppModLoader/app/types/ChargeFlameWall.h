#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChargeFlameWall {
        namespace {
            inline app::ChargeFlameWall__Class* type_info_ref = nullptr;
        }
        inline app::ChargeFlameWall__Class** type_info = &type_info_ref;
        inline app::ChargeFlameWall__Class* get_class() {
            return il2cpp::get_class<app::ChargeFlameWall__Class>(type_info, "", "ChargeFlameWall");
        }
        inline app::ChargeFlameWall* create() {
            return il2cpp::create_object<app::ChargeFlameWall>(get_class());
        }
    } // namespace ChargeFlameWall
} // namespace app::classes::types
