#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EvaluateRandomResultTableRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EvaluateRandomResultTableRequest__Class** type_info;
        inline app::EvaluateRandomResultTableRequest__Class* get_class() {
            return il2cpp::get_class<app::EvaluateRandomResultTableRequest__Class>(type_info, "PlayFab.ServerModels", "EvaluateRandomResultTableRequest");
        }
        inline app::EvaluateRandomResultTableRequest* create() {
            return il2cpp::create_object<app::EvaluateRandomResultTableRequest>(get_class());
        }
    } // namespace EvaluateRandomResultTableRequest
} // namespace app::classes::types
