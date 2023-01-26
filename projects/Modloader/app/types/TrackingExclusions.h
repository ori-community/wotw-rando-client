#pragma once
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/TrackingExclusions__Boxed.h>
#include <Modloader/app/structs/TrackingExclusions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrackingExclusions {
        inline app::TrackingExclusions__Class** type_info() {
            static app::TrackingExclusions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrackingExclusions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrackingExclusions__Class* get_class() {
            return il2cpp::get_class<app::TrackingExclusions__Class>(type_info(), "", "TrackingExclusions");
        }
        inline app::TrackingExclusions* create() {
            return il2cpp::create_object<app::TrackingExclusions>(get_class());
        }
        inline app::TrackingExclusions__Boxed* box(app::TrackingExclusions value) {
            return il2cpp::box_value<app::TrackingExclusions__Boxed>(get_class(), value);
        }
    } // namespace TrackingExclusions
} // namespace app::classes::types
