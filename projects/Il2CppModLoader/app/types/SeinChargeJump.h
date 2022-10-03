#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinChargeJump {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinChargeJump__Class** type_info;
        inline app::SeinChargeJump__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeJump__Class>(type_info, "", "SeinChargeJump");
        }
        inline app::SeinChargeJump* create() {
            return il2cpp::create_object<app::SeinChargeJump>(get_class());
        }
    } // namespace SeinChargeJump
} // namespace app::classes::types
