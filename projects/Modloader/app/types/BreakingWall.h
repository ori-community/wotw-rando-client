#pragma once
#include <Modloader/app/structs/BreakingWall.h>
#include <Modloader/app/structs/BreakingWall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BreakingWall {
        inline app::BreakingWall__Class** type_info() {
            static app::BreakingWall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BreakingWall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BreakingWall__Class* get_class() {
            return il2cpp::get_class<app::BreakingWall__Class>(type_info(), "", "BreakingWall");
        }
        inline app::BreakingWall* create() {
            return il2cpp::create_object<app::BreakingWall>(get_class());
        }
    } // namespace BreakingWall
} // namespace app::classes::types
