#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameController_BrokenSavesFixingSettings {
        namespace {
            inline app::GameController_BrokenSavesFixingSettings__Class* type_info_ref = nullptr;
        }
        inline app::GameController_BrokenSavesFixingSettings__Class** type_info = &type_info_ref;
        inline app::GameController_BrokenSavesFixingSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_BrokenSavesFixingSettings__Class>(type_info, "", "GameController", "BrokenSavesFixingSettings");
        }
        inline app::GameController_BrokenSavesFixingSettings* create() {
            return il2cpp::create_object<app::GameController_BrokenSavesFixingSettings>(get_class());
        }
        inline app::GameController_BrokenSavesFixingSettings__Boxed* box(app::GameController_BrokenSavesFixingSettings value) {
            return il2cpp::box_value<app::GameController_BrokenSavesFixingSettings__Boxed>(get_class(), value);
        }
    } // namespace GameController_BrokenSavesFixingSettings
} // namespace app::classes::types
