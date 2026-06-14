#pragma once
#include <Modloader/app/structs/EventLocation.h>
#include <Modloader/app/structs/EventLocation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventLocation {
        inline app::EventLocation__Class** type_info() {
            static app::EventLocation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventLocation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventLocation__Class* get_class() {
            return il2cpp::get_class<app::EventLocation__Class>(type_info(), "PlayFab.PlayStreamModels", "EventLocation");
        }
        inline app::EventLocation* create() {
            return il2cpp::create_object<app::EventLocation>(get_class());
        }
    } // namespace EventLocation
} // namespace app::classes::types
