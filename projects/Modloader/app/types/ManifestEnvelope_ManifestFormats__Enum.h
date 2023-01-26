#pragma once
#include <Modloader/app/structs/ManifestEnvelope_ManifestFormats__Enum.h>
#include <Modloader/app/structs/ManifestEnvelope_ManifestFormats__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ManifestEnvelope_ManifestFormats__Enum {
        inline app::ManifestEnvelope_ManifestFormats__Enum__Class** type_info() {
            static app::ManifestEnvelope_ManifestFormats__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ManifestEnvelope_ManifestFormats__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ManifestEnvelope_ManifestFormats__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ManifestEnvelope_ManifestFormats__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "ManifestEnvelope", "ManifestFormats");
        }
        inline app::ManifestEnvelope_ManifestFormats__Enum* create() {
            return il2cpp::create_object<app::ManifestEnvelope_ManifestFormats__Enum>(get_class());
        }
    } // namespace ManifestEnvelope_ManifestFormats__Enum
} // namespace app::classes::types
