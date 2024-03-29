#pragma once
#include <Modloader/app/structs/IChannelReceiver.h>
#include <Modloader/app/structs/IChannelReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IChannelReceiver {
        inline app::IChannelReceiver__Class** type_info() {
            static app::IChannelReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IChannelReceiver__Class**)(modloader::win::memory::resolve_rva(0x0470C268));
            }
            return cache;
        }
        inline app::IChannelReceiver__Class* get_class() {
            return il2cpp::get_class<app::IChannelReceiver__Class>(type_info(), "System.Runtime.Remoting.Channels", "IChannelReceiver");
        }
    } // namespace IChannelReceiver
} // namespace app::classes::types
