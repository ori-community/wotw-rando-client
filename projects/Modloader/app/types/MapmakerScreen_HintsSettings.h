#pragma once
#include <Modloader/app/structs/MapmakerScreen_HintsSettings.h>
#include <Modloader/app/structs/MapmakerScreen_HintsSettings__Boxed.h>
#include <Modloader/app/structs/MapmakerScreen_HintsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MapmakerScreen_HintsSettings {
        inline app::MapmakerScreen_HintsSettings__Class** type_info() {
            static app::MapmakerScreen_HintsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MapmakerScreen_HintsSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MapmakerScreen_HintsSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::MapmakerScreen_HintsSettings__Class>(type_info(), "", "MapmakerScreen", "HintsSettings");
        }
        inline app::MapmakerScreen_HintsSettings* create() {
            return il2cpp::create_object<app::MapmakerScreen_HintsSettings>(get_class());
        }
        inline app::MapmakerScreen_HintsSettings__Boxed* box(app::MapmakerScreen_HintsSettings value) {
            return il2cpp::box_value<app::MapmakerScreen_HintsSettings__Boxed>(get_class(), value);
        }
    } // namespace MapmakerScreen_HintsSettings
} // namespace app::classes::types
