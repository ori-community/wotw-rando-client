#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TrackingExclusions {
        namespace {
            inline app::TrackingExclusions__Class* type_info_ref = nullptr;
        }
        inline app::TrackingExclusions__Class** type_info = &type_info_ref;
        inline app::TrackingExclusions__Class* get_class() {
            return il2cpp::get_class<app::TrackingExclusions__Class>(type_info, "", "TrackingExclusions");
        }
        inline app::TrackingExclusions* create() {
            return il2cpp::create_object<app::TrackingExclusions>(get_class());
        }
        inline app::TrackingExclusions__Boxed* box(app::TrackingExclusions value) {
            return il2cpp::box_value<app::TrackingExclusions__Boxed>(get_class(), value);
        }
    } // namespace TrackingExclusions
} // namespace app::classes::types
