#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsumeItemResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConsumeItemResult_1__Class** type_info;
        inline app::ConsumeItemResult_1__Class* get_class() {
            return il2cpp::get_class<app::ConsumeItemResult_1__Class>(type_info, "PlayFab.ServerModels", "ConsumeItemResult");
        }
        inline app::ConsumeItemResult_1* create() {
            return il2cpp::create_object<app::ConsumeItemResult_1>(get_class());
        }
    } // namespace ConsumeItemResult_1
} // namespace app::classes::types
