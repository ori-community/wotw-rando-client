#pragma once
#include <Modloader/app/structs/GameController_BrokenSavesFixingSettings.h>
#include <Modloader/app/structs/GameController_BrokenSavesFixingSettings__Boxed.h>
#include <Modloader/app/structs/GameController_BrokenSavesFixingSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameController_BrokenSavesFixingSettings {
        inline app::GameController_BrokenSavesFixingSettings__Class** type_info() {
            static app::GameController_BrokenSavesFixingSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameController_BrokenSavesFixingSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameController_BrokenSavesFixingSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::GameController_BrokenSavesFixingSettings__Class>(type_info(), "", "GameController", "BrokenSavesFixingSettings");
        }
        inline app::GameController_BrokenSavesFixingSettings* create() {
            return il2cpp::create_object<app::GameController_BrokenSavesFixingSettings>(get_class());
        }
        inline app::GameController_BrokenSavesFixingSettings__Boxed* box(app::GameController_BrokenSavesFixingSettings value) {
            return il2cpp::box_value<app::GameController_BrokenSavesFixingSettings__Boxed>(get_class(), value);
        }
    } // namespace GameController_BrokenSavesFixingSettings
} // namespace app::classes::types
