#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoveOnNintendoSwitch {
        namespace {
            app::RemoveOnNintendoSwitch__Class* type_info_ref = nullptr;
        }
        app::RemoveOnNintendoSwitch__Class** type_info = &type_info_ref;
        inline app::RemoveOnNintendoSwitch__Class* get_class() {
            return il2cpp::get_class<app::RemoveOnNintendoSwitch__Class>(type_info, "Moon.Utilities", "RemoveOnNintendoSwitch");
        }
        inline app::RemoveOnNintendoSwitch* create() {
            return il2cpp::create_object<app::RemoveOnNintendoSwitch>(get_class());
        }
    } // namespace RemoveOnNintendoSwitch
} // namespace app::classes::types
