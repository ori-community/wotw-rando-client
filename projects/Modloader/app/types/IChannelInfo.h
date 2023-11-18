#pragma once
#include <Modloader/app/structs/IChannelInfo.h>
#include <Modloader/app/structs/IChannelInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IChannelInfo {
        inline app::IChannelInfo__Class** type_info() {
            static app::IChannelInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IChannelInfo__Class**)(modloader::win::memory::resolve_rva(0x04737628));
            }
            return cache;
        }
        inline app::IChannelInfo__Class* get_class() {
            return il2cpp::get_class<app::IChannelInfo__Class>(type_info(), "System.Runtime.Remoting", "IChannelInfo");
        }
    } // namespace IChannelInfo
} // namespace app::classes::types
