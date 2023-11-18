#pragma once
#include <Modloader/app/structs/EvaluateRandomResultTableRequest.h>
#include <Modloader/app/structs/EvaluateRandomResultTableRequest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EvaluateRandomResultTableRequest {
        inline app::EvaluateRandomResultTableRequest__Class** type_info() {
            static app::EvaluateRandomResultTableRequest__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EvaluateRandomResultTableRequest__Class**)(modloader::win::memory::resolve_rva(0x04703708));
            }
            return cache;
        }
        inline app::EvaluateRandomResultTableRequest__Class* get_class() {
            return il2cpp::get_class<app::EvaluateRandomResultTableRequest__Class>(type_info(), "PlayFab.ServerModels", "EvaluateRandomResultTableRequest");
        }
        inline app::EvaluateRandomResultTableRequest* create() {
            return il2cpp::create_object<app::EvaluateRandomResultTableRequest>(get_class());
        }
    } // namespace EvaluateRandomResultTableRequest
} // namespace app::classes::types
