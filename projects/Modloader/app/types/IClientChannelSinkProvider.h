#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IClientChannelSinkProvider {
        inline app::IClientChannelSinkProvider__Class** type_info = (app::IClientChannelSinkProvider__Class**)(modloader::win::memory::resolve_rva(0x047555C8));
        inline app::IClientChannelSinkProvider__Class* get_class() {
            return il2cpp::get_class<app::IClientChannelSinkProvider__Class>(type_info, "System.Runtime.Remoting.Channels", "IClientChannelSinkProvider");
        }
    } // namespace IClientChannelSinkProvider
} // namespace app::classes::types
