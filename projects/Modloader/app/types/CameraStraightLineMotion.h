#pragma once
#include <Modloader/app/structs/CameraStraightLineMotion.h>
#include <Modloader/app/structs/CameraStraightLineMotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraStraightLineMotion {
        inline app::CameraStraightLineMotion__Class** type_info() {
            static app::CameraStraightLineMotion__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraStraightLineMotion__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraStraightLineMotion__Class* get_class() {
            return il2cpp::get_class<app::CameraStraightLineMotion__Class>(type_info(), "", "CameraStraightLineMotion");
        }
        inline app::CameraStraightLineMotion* create() {
            return il2cpp::create_object<app::CameraStraightLineMotion>(get_class());
        }
    } // namespace CameraStraightLineMotion
} // namespace app::classes::types
