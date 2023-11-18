#pragma once
#include <Modloader/app/structs/EvaluateRandomResultTableResult.h>
#include <Modloader/app/structs/EvaluateRandomResultTableResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EvaluateRandomResultTableResult {
        inline app::EvaluateRandomResultTableResult__Class** type_info() {
            static app::EvaluateRandomResultTableResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EvaluateRandomResultTableResult__Class**)(modloader::win::memory::resolve_rva(0x0474FDC0));
            }
            return cache;
        }
        inline app::EvaluateRandomResultTableResult__Class* get_class() {
            return il2cpp::get_class<app::EvaluateRandomResultTableResult__Class>(type_info(), "PlayFab.ServerModels", "EvaluateRandomResultTableResult");
        }
        inline app::EvaluateRandomResultTableResult* create() {
            return il2cpp::create_object<app::EvaluateRandomResultTableResult>(get_class());
        }
    } // namespace EvaluateRandomResultTableResult
} // namespace app::classes::types
