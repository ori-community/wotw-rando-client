#pragma once
#include <Modloader/app/structs/GetAllSegmentsResult.h>
#include <Modloader/app/structs/GetAllSegmentsResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetAllSegmentsResult {
        inline app::GetAllSegmentsResult__Class** type_info() {
            static app::GetAllSegmentsResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetAllSegmentsResult__Class**)(modloader::win::memory::resolve_rva(0x04757778));
            }
            return cache;
        }
        inline app::GetAllSegmentsResult__Class* get_class() {
            return il2cpp::get_class<app::GetAllSegmentsResult__Class>(type_info(), "PlayFab.ServerModels", "GetAllSegmentsResult");
        }
        inline app::GetAllSegmentsResult* create() {
            return il2cpp::create_object<app::GetAllSegmentsResult>(get_class());
        }
    } // namespace GetAllSegmentsResult
} // namespace app::classes::types
