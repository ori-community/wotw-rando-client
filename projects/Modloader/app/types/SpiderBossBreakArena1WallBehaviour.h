#pragma once
#include <Modloader/app/structs/SpiderBossBreakArena1WallBehaviour.h>
#include <Modloader/app/structs/SpiderBossBreakArena1WallBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBreakArena1WallBehaviour {
        inline app::SpiderBossBreakArena1WallBehaviour__Class** type_info() {
            static app::SpiderBossBreakArena1WallBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossBreakArena1WallBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossBreakArena1WallBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBreakArena1WallBehaviour__Class>(type_info(), "", "SpiderBossBreakArena1WallBehaviour");
        }
        inline app::SpiderBossBreakArena1WallBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossBreakArena1WallBehaviour>(get_class());
        }
    } // namespace SpiderBossBreakArena1WallBehaviour
} // namespace app::classes::types
