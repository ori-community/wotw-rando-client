#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ManifestEnvelope__Class.h>
#include <Modloader/app/structs/ManifestEnvelope.h>
#include <Modloader/app/structs/ManifestEnvelope__Boxed.h>

namespace app::classes::types {
    namespace ManifestEnvelope {
        namespace {
            inline app::ManifestEnvelope__Class* type_info_ref = nullptr;
        }
        inline app::ManifestEnvelope__Class** type_info = &type_info_ref;
        inline app::ManifestEnvelope__Class* get_class() {
            return il2cpp::get_class<app::ManifestEnvelope__Class>(type_info, "System.Diagnostics.Tracing", "ManifestEnvelope");
        }
        inline app::ManifestEnvelope* create() {
            return il2cpp::create_object<app::ManifestEnvelope>(get_class());
        }
        inline app::ManifestEnvelope__Boxed* box(app::ManifestEnvelope value) {
            return il2cpp::box_value<app::ManifestEnvelope__Boxed>(get_class(), value);
        }
    } // namespace ManifestEnvelope
} // namespace app::classes::types
