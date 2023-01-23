#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IChannelSender__Class.h>

namespace app::classes::types {
    namespace IChannelSender {
        inline app::IChannelSender__Class** type_info = (app::IChannelSender__Class**)(modloader::win::memory::resolve_rva(0x047655D0));
        inline app::IChannelSender__Class* get_class() {
            return il2cpp::get_class<app::IChannelSender__Class>(type_info, "System.Runtime.Remoting.Channels", "IChannelSender");
        }
    } // namespace IChannelSender
} // namespace app::classes::types
