#pragma once
#include <Modloader/app/structs/KwolokBossLocomotion.h>
#include <Modloader/app/structs/KwolokBossLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossLocomotion {
        inline app::KwolokBossLocomotion__Class** type_info() {
            static app::KwolokBossLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04748FC8));
            }
            return cache;
        }
        inline app::KwolokBossLocomotion__Class* get_class() {
            return il2cpp::get_class<app::KwolokBossLocomotion__Class>(type_info(), "", "KwolokBossLocomotion");
        }
        inline app::KwolokBossLocomotion* create() {
            return il2cpp::create_object<app::KwolokBossLocomotion>(get_class());
        }
    } // namespace KwolokBossLocomotion
} // namespace app::classes::types
