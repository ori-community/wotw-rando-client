#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService_ManagedRemoteConnectHandlers {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalService_ManagedRemoteConnectHandlers__Class** type_info;
        inline app::XalService_ManagedRemoteConnectHandlers__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_ManagedRemoteConnectHandlers__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "ManagedRemoteConnectHandlers");
        }
        inline app::XalService_ManagedRemoteConnectHandlers* create() {
            return il2cpp::create_object<app::XalService_ManagedRemoteConnectHandlers>(get_class());
        }
    } // namespace XalService_ManagedRemoteConnectHandlers
} // namespace app::classes::types
