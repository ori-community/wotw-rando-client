#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EvaluateRandomResultTableRequest {
        inline app::EvaluateRandomResultTableRequest__Class** type_info = (app::EvaluateRandomResultTableRequest__Class**)(modloader::win::memory::resolve_rva(0x04703708));
        inline app::EvaluateRandomResultTableRequest__Class* get_class() {
            return il2cpp::get_class<app::EvaluateRandomResultTableRequest__Class>(type_info, "PlayFab.ServerModels", "EvaluateRandomResultTableRequest");
        }
        inline app::EvaluateRandomResultTableRequest* create() {
            return il2cpp::create_object<app::EvaluateRandomResultTableRequest>(get_class());
        }
    } // namespace EvaluateRandomResultTableRequest
} // namespace app::classes::types
