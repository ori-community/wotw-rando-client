#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwitchSeriesPuzzleSwitchSetupHolder__Class.h>
#include <Modloader/app/structs/SwitchSeriesPuzzleSwitchSetupHolder.h>

namespace app::classes::types {
    namespace SwitchSeriesPuzzleSwitchSetupHolder {
        namespace {
            inline app::SwitchSeriesPuzzleSwitchSetupHolder__Class* type_info_ref = nullptr;
        }
        inline app::SwitchSeriesPuzzleSwitchSetupHolder__Class** type_info = &type_info_ref;
        inline app::SwitchSeriesPuzzleSwitchSetupHolder__Class* get_class() {
            return il2cpp::get_class<app::SwitchSeriesPuzzleSwitchSetupHolder__Class>(type_info, "", "SwitchSeriesPuzzleSwitchSetupHolder");
        }
        inline app::SwitchSeriesPuzzleSwitchSetupHolder* create() {
            return il2cpp::create_object<app::SwitchSeriesPuzzleSwitchSetupHolder>(get_class());
        }
    } // namespace SwitchSeriesPuzzleSwitchSetupHolder
} // namespace app::classes::types
