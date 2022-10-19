#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReportCommentsContainer {
        inline app::ReportCommentsContainer__Class** type_info = (app::ReportCommentsContainer__Class**)(modloader::win::memory::resolve_rva(0x04790670));
        inline app::ReportCommentsContainer__Class* get_class() {
            return il2cpp::get_class<app::ReportCommentsContainer__Class>(type_info, "Moon.Telemetry.Performance", "ReportCommentsContainer");
        }
        inline app::ReportCommentsContainer* create() {
            return il2cpp::create_object<app::ReportCommentsContainer>(get_class());
        }
    } // namespace ReportCommentsContainer
} // namespace app::classes::types
