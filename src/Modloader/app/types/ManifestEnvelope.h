#pragma once
#include <Modloader/app/structs/ManifestEnvelope.h>
#include <Modloader/app/structs/ManifestEnvelope__Boxed.h>
#include <Modloader/app/structs/ManifestEnvelope__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ManifestEnvelope {
        inline app::ManifestEnvelope__Class** type_info() {
            static app::ManifestEnvelope__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ManifestEnvelope__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ManifestEnvelope__Class* get_class() {
            return il2cpp::get_class<app::ManifestEnvelope__Class>(type_info(), "System.Diagnostics.Tracing", "ManifestEnvelope");
        }
        inline app::ManifestEnvelope* create() {
            return il2cpp::create_object<app::ManifestEnvelope>(get_class());
        }
        inline app::ManifestEnvelope__Boxed* box(app::ManifestEnvelope value) {
            return il2cpp::box_value<app::ManifestEnvelope__Boxed>(get_class(), value);
        }
    } // namespace ManifestEnvelope
} // namespace app::classes::types
