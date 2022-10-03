#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ManifestEnvelope_ManifestFormats__Enum {
        namespace {
            app::ManifestEnvelope_ManifestFormats__Enum__Class* type_info_ref = nullptr;
        }
        app::ManifestEnvelope_ManifestFormats__Enum__Class** type_info = &type_info_ref;
        inline app::ManifestEnvelope_ManifestFormats__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ManifestEnvelope_ManifestFormats__Enum__Class>(type_info, "System.Diagnostics.Tracing", "ManifestEnvelope", "ManifestFormats");
        }
        inline app::ManifestEnvelope_ManifestFormats__Enum* create() {
            return il2cpp::create_object<app::ManifestEnvelope_ManifestFormats__Enum>(get_class());
        }
    } // namespace ManifestEnvelope_ManifestFormats__Enum
} // namespace app::classes::types
