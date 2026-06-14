#pragma once
#include <Modloader/app/structs/ShowWorldMapObjectiveAction.h>
#include <Modloader/app/structs/ShowWorldMapObjectiveAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowWorldMapObjectiveAction {
        inline app::ShowWorldMapObjectiveAction__Class** type_info() {
            static app::ShowWorldMapObjectiveAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowWorldMapObjectiveAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowWorldMapObjectiveAction__Class* get_class() {
            return il2cpp::get_class<app::ShowWorldMapObjectiveAction__Class>(type_info(), "", "ShowWorldMapObjectiveAction");
        }
        inline app::ShowWorldMapObjectiveAction* create() {
            return il2cpp::create_object<app::ShowWorldMapObjectiveAction>(get_class());
        }
    } // namespace ShowWorldMapObjectiveAction
} // namespace app::classes::types
