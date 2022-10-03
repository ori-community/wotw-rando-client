#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsumeItemResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConsumeItemResult__Class** type_info;
        inline app::ConsumeItemResult__Class* get_class() {
            return il2cpp::get_class<app::ConsumeItemResult__Class>(type_info, "PlayFab.ClientModels", "ConsumeItemResult");
        }
        inline app::ConsumeItemResult* create() {
            return il2cpp::create_object<app::ConsumeItemResult>(get_class());
        }
    } // namespace ConsumeItemResult
} // namespace app::classes::types
