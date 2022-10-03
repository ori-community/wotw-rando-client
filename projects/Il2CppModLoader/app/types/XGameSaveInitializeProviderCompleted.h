#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveInitializeProviderCompleted {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XGameSaveInitializeProviderCompleted__Class** type_info;
        inline app::XGameSaveInitializeProviderCompleted__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveInitializeProviderCompleted__Class>(type_info, "XGamingRuntime", "XGameSaveInitializeProviderCompleted");
        }
        inline app::XGameSaveInitializeProviderCompleted* create() {
            return il2cpp::create_object<app::XGameSaveInitializeProviderCompleted>(get_class());
        }
    } // namespace XGameSaveInitializeProviderCompleted
} // namespace app::classes::types
