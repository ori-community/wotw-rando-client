#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReportMetadata {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReportMetadata__Class** type_info;
        inline app::ReportMetadata__Class* get_class() {
            return il2cpp::get_class<app::ReportMetadata__Class>(type_info, "Moon.Telemetry.Performance", "ReportMetadata");
        }
        inline app::ReportMetadata* create() {
            return il2cpp::create_object<app::ReportMetadata>(get_class());
        }
    } // namespace ReportMetadata
} // namespace app::classes::types
