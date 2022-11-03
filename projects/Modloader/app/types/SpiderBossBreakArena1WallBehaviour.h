#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossBreakArena1WallBehaviour {
        namespace {
            inline app::SpiderBossBreakArena1WallBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossBreakArena1WallBehaviour__Class** type_info = &type_info_ref;
        inline app::SpiderBossBreakArena1WallBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBreakArena1WallBehaviour__Class>(type_info, "", "SpiderBossBreakArena1WallBehaviour");
        }
        inline app::SpiderBossBreakArena1WallBehaviour* create() {
            return il2cpp::create_object<app::SpiderBossBreakArena1WallBehaviour>(get_class());
        }
    } // namespace SpiderBossBreakArena1WallBehaviour
} // namespace app::classes::types
