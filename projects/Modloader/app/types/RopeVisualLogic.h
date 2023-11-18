#pragma once
#include <Modloader/app/structs/RopeVisualLogic.h>
#include <Modloader/app/structs/RopeVisualLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RopeVisualLogic {
        inline app::RopeVisualLogic__Class** type_info() {
            static app::RopeVisualLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RopeVisualLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RopeVisualLogic__Class* get_class() {
            return il2cpp::get_class<app::RopeVisualLogic__Class>(type_info(), "", "RopeVisualLogic");
        }
        inline app::RopeVisualLogic* create() {
            return il2cpp::create_object<app::RopeVisualLogic>(get_class());
        }
    } // namespace RopeVisualLogic
} // namespace app::classes::types
