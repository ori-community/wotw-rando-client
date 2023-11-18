#pragma once
#include <Modloader/app/structs/ReportCommentsContainer.h>
#include <Modloader/app/structs/ReportCommentsContainer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReportCommentsContainer {
        inline app::ReportCommentsContainer__Class** type_info() {
            static app::ReportCommentsContainer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReportCommentsContainer__Class**)(modloader::win::memory::resolve_rva(0x04790670));
            }
            return cache;
        }
        inline app::ReportCommentsContainer__Class* get_class() {
            return il2cpp::get_class<app::ReportCommentsContainer__Class>(type_info(), "Moon.Telemetry.Performance", "ReportCommentsContainer");
        }
        inline app::ReportCommentsContainer* create() {
            return il2cpp::create_object<app::ReportCommentsContainer>(get_class());
        }
    } // namespace ReportCommentsContainer
} // namespace app::classes::types
