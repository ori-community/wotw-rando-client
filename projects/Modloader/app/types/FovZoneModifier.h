#pragma once
#include <Modloader/app/structs/FovZoneModifier.h>
#include <Modloader/app/structs/FovZoneModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FovZoneModifier {
        inline app::FovZoneModifier__Class** type_info() {
            static app::FovZoneModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FovZoneModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FovZoneModifier__Class* get_class() {
            return il2cpp::get_class<app::FovZoneModifier__Class>(type_info(), "", "FovZoneModifier");
        }
        inline app::FovZoneModifier* create() {
            return il2cpp::create_object<app::FovZoneModifier>(get_class());
        }
    } // namespace FovZoneModifier
} // namespace app::classes::types
