#pragma once
#include <Modloader/app/structs/ColliderEnterExitTrigger.h>
#include <Modloader/app/structs/ColliderEnterExitTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColliderEnterExitTrigger {
        inline app::ColliderEnterExitTrigger__Class** type_info() {
            static app::ColliderEnterExitTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColliderEnterExitTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColliderEnterExitTrigger__Class* get_class() {
            return il2cpp::get_class<app::ColliderEnterExitTrigger__Class>(type_info(), "", "ColliderEnterExitTrigger");
        }
        inline app::ColliderEnterExitTrigger* create() {
            return il2cpp::create_object<app::ColliderEnterExitTrigger>(get_class());
        }
    } // namespace ColliderEnterExitTrigger
} // namespace app::classes::types
