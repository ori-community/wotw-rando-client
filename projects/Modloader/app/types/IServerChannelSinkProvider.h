#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IServerChannelSinkProvider {
        inline app::IServerChannelSinkProvider__Class** type_info = (app::IServerChannelSinkProvider__Class**)(modloader::win::memory::resolve_rva(0x04753EC0));
        inline app::IServerChannelSinkProvider__Class* get_class() {
            return il2cpp::get_class<app::IServerChannelSinkProvider__Class>(type_info, "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider");
        }
    } // namespace IServerChannelSinkProvider
} // namespace app::classes::types
