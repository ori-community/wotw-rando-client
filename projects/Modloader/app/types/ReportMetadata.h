#pragma once
#include <Modloader/app/structs/ReportMetadata.h>
#include <Modloader/app/structs/ReportMetadata__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReportMetadata {
        inline app::ReportMetadata__Class** type_info() {
            static app::ReportMetadata__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReportMetadata__Class**)(modloader::win::memory::resolve_rva(0x0475B988));
            }
            return cache;
        }
        inline app::ReportMetadata__Class* get_class() {
            return il2cpp::get_class<app::ReportMetadata__Class>(type_info(), "Moon.Telemetry.Performance", "ReportMetadata");
        }
        inline app::ReportMetadata* create() {
            return il2cpp::create_object<app::ReportMetadata>(get_class());
        }
    } // namespace ReportMetadata
} // namespace app::classes::types
