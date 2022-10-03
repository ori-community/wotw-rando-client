#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ApiProcessingEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ApiProcessingEventArgs__Class** type_info;
        inline app::ApiProcessingEventArgs__Class* get_class() {
            return il2cpp::get_class<app::ApiProcessingEventArgs__Class>(type_info, "PlayFab.Internal", "ApiProcessingEventArgs");
        }
        inline app::ApiProcessingEventArgs* create() {
            return il2cpp::create_object<app::ApiProcessingEventArgs>(get_class());
        }
    } // namespace ApiProcessingEventArgs
} // namespace app::classes::types
