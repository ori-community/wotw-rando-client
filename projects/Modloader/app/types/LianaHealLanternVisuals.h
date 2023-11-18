#pragma once
#include <Modloader/app/structs/LianaHealLanternVisuals.h>
#include <Modloader/app/structs/LianaHealLanternVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LianaHealLanternVisuals {
        inline app::LianaHealLanternVisuals__Class** type_info() {
            static app::LianaHealLanternVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LianaHealLanternVisuals__Class**)(modloader::win::memory::resolve_rva(0x0477C270));
            }
            return cache;
        }
        inline app::LianaHealLanternVisuals__Class* get_class() {
            return il2cpp::get_class<app::LianaHealLanternVisuals__Class>(type_info(), "", "LianaHealLanternVisuals");
        }
        inline app::LianaHealLanternVisuals* create() {
            return il2cpp::create_object<app::LianaHealLanternVisuals>(get_class());
        }
    } // namespace LianaHealLanternVisuals
} // namespace app::classes::types
