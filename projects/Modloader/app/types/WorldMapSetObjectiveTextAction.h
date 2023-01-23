#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WorldMapSetObjectiveTextAction__Class.h>
#include <Modloader/app/structs/WorldMapSetObjectiveTextAction.h>

namespace app::classes::types {
    namespace WorldMapSetObjectiveTextAction {
        namespace {
            inline app::WorldMapSetObjectiveTextAction__Class* type_info_ref = nullptr;
        }
        inline app::WorldMapSetObjectiveTextAction__Class** type_info = &type_info_ref;
        inline app::WorldMapSetObjectiveTextAction__Class* get_class() {
            return il2cpp::get_class<app::WorldMapSetObjectiveTextAction__Class>(type_info, "", "WorldMapSetObjectiveTextAction");
        }
        inline app::WorldMapSetObjectiveTextAction* create() {
            return il2cpp::create_object<app::WorldMapSetObjectiveTextAction>(get_class());
        }
    } // namespace WorldMapSetObjectiveTextAction
} // namespace app::classes::types
