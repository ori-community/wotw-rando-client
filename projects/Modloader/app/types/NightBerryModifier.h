#pragma once
#include <Modloader/app/structs/NightBerryModifier.h>
#include <Modloader/app/structs/NightBerryModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NightBerryModifier {
        inline app::NightBerryModifier__Class** type_info() {
            static app::NightBerryModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NightBerryModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NightBerryModifier__Class* get_class() {
            return il2cpp::get_class<app::NightBerryModifier__Class>(type_info(), "", "NightBerryModifier");
        }
        inline app::NightBerryModifier* create() {
            return il2cpp::create_object<app::NightBerryModifier>(get_class());
        }
    } // namespace NightBerryModifier
} // namespace app::classes::types
