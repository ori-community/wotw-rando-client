#pragma once
#include <Modloader/app/structs/EventSource_Sha1ForNonSecretPurposes.h>
#include <Modloader/app/structs/EventSource_Sha1ForNonSecretPurposes__Boxed.h>
#include <Modloader/app/structs/EventSource_Sha1ForNonSecretPurposes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventSource_Sha1ForNonSecretPurposes {
        inline app::EventSource_Sha1ForNonSecretPurposes__Class** type_info() {
            static app::EventSource_Sha1ForNonSecretPurposes__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventSource_Sha1ForNonSecretPurposes__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventSource_Sha1ForNonSecretPurposes__Class* get_class() {
            return il2cpp::get_nested_class<app::EventSource_Sha1ForNonSecretPurposes__Class>(type_info(), "System.Diagnostics.Tracing", "EventSource", "Sha1ForNonSecretPurposes");
        }
        inline app::EventSource_Sha1ForNonSecretPurposes* create() {
            return il2cpp::create_object<app::EventSource_Sha1ForNonSecretPurposes>(get_class());
        }
        inline app::EventSource_Sha1ForNonSecretPurposes__Boxed* box(app::EventSource_Sha1ForNonSecretPurposes value) {
            return il2cpp::box_value<app::EventSource_Sha1ForNonSecretPurposes__Boxed>(get_class(), value);
        }
    } // namespace EventSource_Sha1ForNonSecretPurposes
} // namespace app::classes::types
