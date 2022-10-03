#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService_ManagedStorageHandlers {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalService_ManagedStorageHandlers__Class** type_info;
        inline app::XalService_ManagedStorageHandlers__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_ManagedStorageHandlers__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "ManagedStorageHandlers");
        }
        inline app::XalService_ManagedStorageHandlers* create() {
            return il2cpp::create_object<app::XalService_ManagedStorageHandlers>(get_class());
        }
    } // namespace XalService_ManagedStorageHandlers
} // namespace app::classes::types
