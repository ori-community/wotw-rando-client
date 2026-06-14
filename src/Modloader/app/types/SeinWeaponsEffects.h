#pragma once
#include <Modloader/app/structs/SeinWeaponsEffects.h>
#include <Modloader/app/structs/SeinWeaponsEffects__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinWeaponsEffects {
        inline app::SeinWeaponsEffects__Class** type_info() {
            static app::SeinWeaponsEffects__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinWeaponsEffects__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinWeaponsEffects__Class* get_class() {
            return il2cpp::get_class<app::SeinWeaponsEffects__Class>(type_info(), "", "SeinWeaponsEffects");
        }
        inline app::SeinWeaponsEffects* create() {
            return il2cpp::create_object<app::SeinWeaponsEffects>(get_class());
        }
    } // namespace SeinWeaponsEffects
} // namespace app::classes::types
