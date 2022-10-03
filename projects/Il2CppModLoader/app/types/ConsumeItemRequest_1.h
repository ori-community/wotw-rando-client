#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsumeItemRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConsumeItemRequest_1__Class** type_info;
        inline app::ConsumeItemRequest_1__Class* get_class() {
            return il2cpp::get_class<app::ConsumeItemRequest_1__Class>(type_info, "PlayFab.ServerModels", "ConsumeItemRequest");
        }
        inline app::ConsumeItemRequest_1* create() {
            return il2cpp::create_object<app::ConsumeItemRequest_1>(get_class());
        }
    } // namespace ConsumeItemRequest_1
} // namespace app::classes::types
