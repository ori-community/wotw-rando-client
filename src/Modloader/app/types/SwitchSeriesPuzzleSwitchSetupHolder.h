#pragma once
#include <Modloader/app/structs/SwitchSeriesPuzzleSwitchSetupHolder.h>
#include <Modloader/app/structs/SwitchSeriesPuzzleSwitchSetupHolder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchSeriesPuzzleSwitchSetupHolder {
        inline app::SwitchSeriesPuzzleSwitchSetupHolder__Class** type_info() {
            static app::SwitchSeriesPuzzleSwitchSetupHolder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwitchSeriesPuzzleSwitchSetupHolder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwitchSeriesPuzzleSwitchSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::SwitchSeriesPuzzleSwitchSetupHolder__Class>(type_info(), "", "SwitchSeriesPuzzleSwitchSetupHolder");
        }
        inline app::SwitchSeriesPuzzleSwitchSetupHolder* create() {
            return il2cpp::create_object<app::SwitchSeriesPuzzleSwitchSetupHolder>(get_class());
        }
    } // namespace SwitchSeriesPuzzleSwitchSetupHolder
} // namespace app::classes::types
