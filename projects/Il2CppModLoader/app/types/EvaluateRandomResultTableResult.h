#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EvaluateRandomResultTableResult {
        inline app::EvaluateRandomResultTableResult__Class** type_info = (app::EvaluateRandomResultTableResult__Class**)(modloader::win::memory::resolve_rva(0x0474FDC0));
        inline app::EvaluateRandomResultTableResult__Class* get_class() {
            return il2cpp::get_class<app::EvaluateRandomResultTableResult__Class>(type_info, "PlayFab.ServerModels", "EvaluateRandomResultTableResult");
        }
        inline app::EvaluateRandomResultTableResult* create() {
            return il2cpp::create_object<app::EvaluateRandomResultTableResult>(get_class());
        }
    } // namespace EvaluateRandomResultTableResult
} // namespace app::classes::types
