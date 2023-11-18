#pragma once
#include <Modloader/app/structs/SeinChargeFlameAbility.h>
#include <Modloader/app/structs/SeinChargeFlameAbility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChargeFlameAbility {
        inline app::SeinChargeFlameAbility__Class** type_info() {
            static app::SeinChargeFlameAbility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinChargeFlameAbility__Class**)(modloader::win::memory::resolve_rva(0x04763798));
            }
            return cache;
        }
        inline app::SeinChargeFlameAbility__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeFlameAbility__Class>(type_info(), "", "SeinChargeFlameAbility");
        }
        inline app::SeinChargeFlameAbility* create() {
            return il2cpp::create_object<app::SeinChargeFlameAbility>(get_class());
        }
    } // namespace SeinChargeFlameAbility
} // namespace app::classes::types
