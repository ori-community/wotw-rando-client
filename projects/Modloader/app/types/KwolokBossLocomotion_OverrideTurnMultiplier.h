#pragma once
#include <Modloader/app/structs/KwolokBossLocomotion_OverrideTurnMultiplier.h>
#include <Modloader/app/structs/KwolokBossLocomotion_OverrideTurnMultiplier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion_OverrideTurnMultiplier {
        inline app::KwolokBossLocomotion_OverrideTurnMultiplier__Class** type_info() {
            static app::KwolokBossLocomotion_OverrideTurnMultiplier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossLocomotion_OverrideTurnMultiplier__Class**)(modloader::win::memory::resolve_rva(0x0471CCF8));
            }
            return cache;
        }
        inline app::KwolokBossLocomotion_OverrideTurnMultiplier__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossLocomotion_OverrideTurnMultiplier__Class>(type_info(), "", "KwolokBossLocomotion", "OverrideTurnMultiplier");
        }
        inline app::KwolokBossLocomotion_OverrideTurnMultiplier* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion_OverrideTurnMultiplier>(get_class());
        }
    } // namespace KwolokBossLocomotion_OverrideTurnMultiplier
} // namespace app::classes::types
