#pragma once
#include <Modloader/app/structs/DofZoneModifier.h>
#include <Modloader/app/structs/DofZoneModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DofZoneModifier {
        inline app::DofZoneModifier__Class** type_info() {
            static app::DofZoneModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DofZoneModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DofZoneModifier__Class* get_class() {
            return il2cpp::get_class<app::DofZoneModifier__Class>(type_info(), "", "DofZoneModifier");
        }
        inline app::DofZoneModifier* create() {
            return il2cpp::create_object<app::DofZoneModifier>(get_class());
        }
    } // namespace DofZoneModifier
} // namespace app::classes::types
