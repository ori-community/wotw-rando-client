#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchSeriesPuzzleSwitchSetupHolder {
        namespace {
            app::SwitchSeriesPuzzleSwitchSetupHolder__Class* type_info_ref = nullptr;
        }
        app::SwitchSeriesPuzzleSwitchSetupHolder__Class** type_info = &type_info_ref;
        inline app::SwitchSeriesPuzzleSwitchSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::SwitchSeriesPuzzleSwitchSetupHolder__Class>(type_info, "", "SwitchSeriesPuzzleSwitchSetupHolder");
        }
        inline app::SwitchSeriesPuzzleSwitchSetupHolder* create() {
            return il2cpp::create_object<app::SwitchSeriesPuzzleSwitchSetupHolder>(get_class());
        }
    } // namespace SwitchSeriesPuzzleSwitchSetupHolder
} // namespace app::classes::types
