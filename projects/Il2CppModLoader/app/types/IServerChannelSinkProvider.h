#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IServerChannelSinkProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IServerChannelSinkProvider__Class** type_info;
        inline app::IServerChannelSinkProvider__Class* get_class() {
            return il2cpp::get_class<app::IServerChannelSinkProvider__Class>(type_info, "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider");
        }
    } // namespace IServerChannelSinkProvider
} // namespace app::classes::types
