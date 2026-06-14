#pragma once
#include <Modloader/app/structs/WorldMapSetObjectiveTextAction.h>
#include <Modloader/app/structs/WorldMapSetObjectiveTextAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldMapSetObjectiveTextAction {
        inline app::WorldMapSetObjectiveTextAction__Class** type_info() {
            static app::WorldMapSetObjectiveTextAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldMapSetObjectiveTextAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldMapSetObjectiveTextAction__Class* get_class() {
            return il2cpp::get_class<app::WorldMapSetObjectiveTextAction__Class>(type_info(), "", "WorldMapSetObjectiveTextAction");
        }
        inline app::WorldMapSetObjectiveTextAction* create() {
            return il2cpp::create_object<app::WorldMapSetObjectiveTextAction>(get_class());
        }
    } // namespace WorldMapSetObjectiveTextAction
} // namespace app::classes::types
