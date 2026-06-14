#pragma once
#include <Modloader/app/structs/IChannelDataStore.h>
#include <Modloader/app/structs/IChannelDataStore__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IChannelDataStore {
        inline app::IChannelDataStore__Class** type_info() {
            static app::IChannelDataStore__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IChannelDataStore__Class**)(modloader::win::memory::resolve_rva(0x0475F7D0));
            }
            return cache;
        }
        inline app::IChannelDataStore__Class* get_class() {
            return il2cpp::get_class<app::IChannelDataStore__Class>(type_info(), "System.Runtime.Remoting.Channels", "IChannelDataStore");
        }
    } // namespace IChannelDataStore
} // namespace app::classes::types
