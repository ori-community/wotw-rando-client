#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ManifestEnvelope_ManifestFormats__Enum {
        namespace {
            inline app::ManifestEnvelope_ManifestFormats__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ManifestEnvelope_ManifestFormats__Enum__Class** type_info = &type_info_ref;
        inline app::ManifestEnvelope_ManifestFormats__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ManifestEnvelope_ManifestFormats__Enum__Class>(type_info, "System.Diagnostics.Tracing", "ManifestEnvelope", "ManifestFormats");
        }
        inline app::ManifestEnvelope_ManifestFormats__Enum* create() {
            return il2cpp::create_object<app::ManifestEnvelope_ManifestFormats__Enum>(get_class());
        }
    } // namespace ManifestEnvelope_ManifestFormats__Enum
} // namespace app::classes::types
