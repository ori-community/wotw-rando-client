#pragma once
#include <Modloader/app/structs/PositionCheckerPlugin.h>
#include <Modloader/app/structs/PositionCheckerPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionCheckerPlugin {
        inline app::PositionCheckerPlugin__Class** type_info() {
            static app::PositionCheckerPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionCheckerPlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionCheckerPlugin__Class* get_class() {
            return il2cpp::get_class<app::PositionCheckerPlugin__Class>(type_info(), "", "PositionCheckerPlugin");
        }
        inline app::PositionCheckerPlugin* create() {
            return il2cpp::create_object<app::PositionCheckerPlugin>(get_class());
        }
    } // namespace PositionCheckerPlugin
} // namespace app::classes::types
