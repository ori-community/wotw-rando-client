#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetAllSegmentsResult {
        inline app::GetAllSegmentsResult__Class** type_info = (app::GetAllSegmentsResult__Class**)(modloader::win::memory::resolve_rva(0x04757778));
        inline app::GetAllSegmentsResult__Class* get_class() {
            return il2cpp::get_class<app::GetAllSegmentsResult__Class>(type_info, "PlayFab.ServerModels", "GetAllSegmentsResult");
        }
        inline app::GetAllSegmentsResult* create() {
            return il2cpp::create_object<app::GetAllSegmentsResult>(get_class());
        }
    } // namespace GetAllSegmentsResult
} // namespace app::classes::types
