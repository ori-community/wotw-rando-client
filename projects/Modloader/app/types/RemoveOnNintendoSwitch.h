#pragma once
#include <Modloader/app/structs/RemoveOnNintendoSwitch.h>
#include <Modloader/app/structs/RemoveOnNintendoSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveOnNintendoSwitch {
        inline app::RemoveOnNintendoSwitch__Class** type_info() {
            static app::RemoveOnNintendoSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoveOnNintendoSwitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoveOnNintendoSwitch__Class* get_class() {
            return il2cpp::get_class<app::RemoveOnNintendoSwitch__Class>(type_info(), "Moon.Utilities", "RemoveOnNintendoSwitch");
        }
        inline app::RemoveOnNintendoSwitch* create() {
            return il2cpp::create_object<app::RemoveOnNintendoSwitch>(get_class());
        }
    } // namespace RemoveOnNintendoSwitch
} // namespace app::classes::types
