#pragma once
#include <Modloader/app/structs/RemoveReflectionOnNintendoSwitch.h>
#include <Modloader/app/structs/RemoveReflectionOnNintendoSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveReflectionOnNintendoSwitch {
        inline app::RemoveReflectionOnNintendoSwitch__Class** type_info() {
            static app::RemoveReflectionOnNintendoSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoveReflectionOnNintendoSwitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoveReflectionOnNintendoSwitch__Class* get_class() {
            return il2cpp::get_class<app::RemoveReflectionOnNintendoSwitch__Class>(type_info(), "Moon.Utilities", "RemoveReflectionOnNintendoSwitch");
        }
        inline app::RemoveReflectionOnNintendoSwitch* create() {
            return il2cpp::create_object<app::RemoveReflectionOnNintendoSwitch>(get_class());
        }
    } // namespace RemoveReflectionOnNintendoSwitch
} // namespace app::classes::types
