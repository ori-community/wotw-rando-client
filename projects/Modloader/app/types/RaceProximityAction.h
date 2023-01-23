#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceProximityAction__Class.h>
#include <Modloader/app/structs/RaceProximityAction.h>

namespace app::classes::types {
    namespace RaceProximityAction {
        namespace {
            inline app::RaceProximityAction__Class* type_info_ref = nullptr;
        }
        inline app::RaceProximityAction__Class** type_info = &type_info_ref;
        inline app::RaceProximityAction__Class* get_class() {
            return il2cpp::get_class<app::RaceProximityAction__Class>(type_info, "Moon.Race", "RaceProximityAction");
        }
        inline app::RaceProximityAction* create() {
            return il2cpp::create_object<app::RaceProximityAction>(get_class());
        }
    } // namespace RaceProximityAction
} // namespace app::classes::types
