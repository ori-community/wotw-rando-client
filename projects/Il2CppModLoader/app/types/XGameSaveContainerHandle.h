#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XGameSaveContainerHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XGameSaveContainerHandle__Class** type_info;
        inline app::XGameSaveContainerHandle__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveContainerHandle__Class>(type_info, "XGamingRuntime", "XGameSaveContainerHandle");
        }
        inline app::XGameSaveContainerHandle* create() {
            return il2cpp::create_object<app::XGameSaveContainerHandle>(get_class());
        }
    } // namespace XGameSaveContainerHandle
} // namespace app::classes::types
