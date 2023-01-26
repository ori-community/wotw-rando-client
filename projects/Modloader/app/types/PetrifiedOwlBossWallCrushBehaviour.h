#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossWallCrushBehaviour.h>
#include <Modloader/app/structs/PetrifiedOwlBossWallCrushBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossWallCrushBehaviour {
        inline app::PetrifiedOwlBossWallCrushBehaviour__Class** type_info() {
            static app::PetrifiedOwlBossWallCrushBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossWallCrushBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossWallCrushBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PetrifiedOwlBossWallCrushBehaviour__Class>(type_info(), "", "PetrifiedOwlBossWallCrushBehaviour");
        }
        inline app::PetrifiedOwlBossWallCrushBehaviour* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossWallCrushBehaviour>(get_class());
        }
    } // namespace PetrifiedOwlBossWallCrushBehaviour
} // namespace app::classes::types
