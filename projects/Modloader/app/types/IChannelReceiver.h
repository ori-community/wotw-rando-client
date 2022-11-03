#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IChannelReceiver {
        inline app::IChannelReceiver__Class** type_info = (app::IChannelReceiver__Class**)(modloader::win::memory::resolve_rva(0x0470C268));
        inline app::IChannelReceiver__Class* get_class() {
            return il2cpp::get_class<app::IChannelReceiver__Class>(type_info, "System.Runtime.Remoting.Channels", "IChannelReceiver");
        }
    } // namespace IChannelReceiver
} // namespace app::classes::types
