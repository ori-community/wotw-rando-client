#pragma once
#include <Modloader/app/structs/SeinWallChargeJump.h>
#include <Modloader/app/structs/SeinWallChargeJump__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinWallChargeJump {
        inline app::SeinWallChargeJump__Class** type_info() {
            static app::SeinWallChargeJump__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinWallChargeJump__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinWallChargeJump__Class* get_class() {
            return il2cpp::get_class<app::SeinWallChargeJump__Class>(type_info(), "", "SeinWallChargeJump");
        }
        inline app::SeinWallChargeJump* create() {
            return il2cpp::create_object<app::SeinWallChargeJump>(get_class());
        }
    } // namespace SeinWallChargeJump
} // namespace app::classes::types
