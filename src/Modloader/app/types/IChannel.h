#pragma once
#include <Modloader/app/structs/IChannel.h>
#include <Modloader/app/structs/IChannel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IChannel {
        inline app::IChannel__Class** type_info() {
            static app::IChannel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IChannel__Class**)(modloader::win::memory::resolve_rva(0x0474EE58));
            }
            return cache;
        }
        inline app::IChannel__Class* get_class() {
            return il2cpp::get_class<app::IChannel__Class>(type_info(), "System.Runtime.Remoting.Channels", "IChannel");
        }
    } // namespace IChannel
} // namespace app::classes::types
