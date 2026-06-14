#pragma once
#include <Modloader/app/structs/ReportPlayerClientResult.h>
#include <Modloader/app/structs/ReportPlayerClientResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReportPlayerClientResult {
        inline app::ReportPlayerClientResult__Class** type_info() {
            static app::ReportPlayerClientResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ReportPlayerClientResult__Class**)(modloader::win::memory::resolve_rva(0x04716D50));
            }
            return cache;
        }
        inline app::ReportPlayerClientResult__Class* get_class() {
            return il2cpp::get_class<app::ReportPlayerClientResult__Class>(type_info(), "PlayFab.ClientModels", "ReportPlayerClientResult");
        }
        inline app::ReportPlayerClientResult* create() {
            return il2cpp::create_object<app::ReportPlayerClientResult>(get_class());
        }
    } // namespace ReportPlayerClientResult
} // namespace app::classes::types
