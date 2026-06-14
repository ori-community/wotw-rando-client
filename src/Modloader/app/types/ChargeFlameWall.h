#pragma once
#include <Modloader/app/structs/ChargeFlameWall.h>
#include <Modloader/app/structs/ChargeFlameWall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChargeFlameWall {
        inline app::ChargeFlameWall__Class** type_info() {
            static app::ChargeFlameWall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChargeFlameWall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChargeFlameWall__Class* get_class() {
            return il2cpp::get_class<app::ChargeFlameWall__Class>(type_info(), "", "ChargeFlameWall");
        }
        inline app::ChargeFlameWall* create() {
            return il2cpp::create_object<app::ChargeFlameWall>(get_class());
        }
    } // namespace ChargeFlameWall
} // namespace app::classes::types
