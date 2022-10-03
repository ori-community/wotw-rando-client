#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveProviderHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XGameSaveProviderHandle__Class** type_info;
        inline app::XGameSaveProviderHandle__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveProviderHandle__Class>(type_info, "XGamingRuntime", "XGameSaveProviderHandle");
        }
        inline app::XGameSaveProviderHandle* create() {
            return il2cpp::create_object<app::XGameSaveProviderHandle>(get_class());
        }
    } // namespace XGameSaveProviderHandle
} // namespace app::classes::types
