#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReportPlayerServerResult__Class.h>
#include <Modloader/app/structs/ReportPlayerServerResult.h>

namespace app::classes::types {
    namespace ReportPlayerServerResult {
        inline app::ReportPlayerServerResult__Class** type_info = (app::ReportPlayerServerResult__Class**)(modloader::win::memory::resolve_rva(0x04797CF0));
        inline app::ReportPlayerServerResult__Class* get_class() {
            return il2cpp::get_class<app::ReportPlayerServerResult__Class>(type_info, "PlayFab.ServerModels", "ReportPlayerServerResult");
        }
        inline app::ReportPlayerServerResult* create() {
            return il2cpp::create_object<app::ReportPlayerServerResult>(get_class());
        }
    } // namespace ReportPlayerServerResult
} // namespace app::classes::types
