#pragma once
#include <Modloader/app/structs/SpiderBossLocomotion.h>
#include <Modloader/app/structs/SpiderBossLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocomotion {
        inline app::SpiderBossLocomotion__Class** type_info() {
            static app::SpiderBossLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderBossLocomotion__Class**)(modloader::win::memory::resolve_rva(0x0477AEA0));
            }
            return cache;
        }
        inline app::SpiderBossLocomotion__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocomotion__Class>(type_info(), "", "SpiderBossLocomotion");
        }
        inline app::SpiderBossLocomotion* create() {
            return il2cpp::create_object<app::SpiderBossLocomotion>(get_class());
        }
    } // namespace SpiderBossLocomotion
} // namespace app::classes::types
