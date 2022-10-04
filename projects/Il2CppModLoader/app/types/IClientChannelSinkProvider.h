#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IClientChannelSinkProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IClientChannelSinkProvider__Class** type_info;
        inline app::IClientChannelSinkProvider__Class* get_class() {
            return il2cpp::get_class<app::IClientChannelSinkProvider__Class>(type_info, "System.Runtime.Remoting.Channels", "IClientChannelSinkProvider");
        }
        inline app::IClientChannelSinkProvider* create() {
            return il2cpp::create_object<app::IClientChannelSinkProvider>(get_class());
        }
    } // namespace IClientChannelSinkProvider
} // namespace app::classes::types
