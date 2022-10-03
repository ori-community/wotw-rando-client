#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinWallChargeJump {
        namespace {
            app::SeinWallChargeJump__Class* type_info_ref = nullptr;
        }
        app::SeinWallChargeJump__Class** type_info = &type_info_ref;
        inline app::SeinWallChargeJump__Class* get_class() {
            return il2cpp::get_class<app::SeinWallChargeJump__Class>(type_info, "", "SeinWallChargeJump");
        }
        inline app::SeinWallChargeJump* create() {
            return il2cpp::create_object<app::SeinWallChargeJump>(get_class());
        }
    } // namespace SeinWallChargeJump
} // namespace app::classes::types
