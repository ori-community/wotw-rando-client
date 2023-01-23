#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RaceStartAction__Class.h>
#include <Modloader/app/structs/RaceStartAction.h>

namespace app::classes::types {
    namespace RaceStartAction {
        namespace {
            inline app::RaceStartAction__Class* type_info_ref = nullptr;
        }
        inline app::RaceStartAction__Class** type_info = &type_info_ref;
        inline app::RaceStartAction__Class* get_class() {
            return il2cpp::get_class<app::RaceStartAction__Class>(type_info, "Moon.Race", "RaceStartAction");
        }
        inline app::RaceStartAction* create() {
            return il2cpp::create_object<app::RaceStartAction>(get_class());
        }
    } // namespace RaceStartAction
} // namespace app::classes::types
