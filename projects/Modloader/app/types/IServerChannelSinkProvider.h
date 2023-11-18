#pragma once
#include <Modloader/app/structs/IServerChannelSinkProvider.h>
#include <Modloader/app/structs/IServerChannelSinkProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IServerChannelSinkProvider {
        inline app::IServerChannelSinkProvider__Class** type_info() {
            static app::IServerChannelSinkProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IServerChannelSinkProvider__Class**)(modloader::win::memory::resolve_rva(0x04753EC0));
            }
            return cache;
        }
        inline app::IServerChannelSinkProvider__Class* get_class() {
            return il2cpp::get_class<app::IServerChannelSinkProvider__Class>(type_info(), "System.Runtime.Remoting.Channels", "IServerChannelSinkProvider");
        }
    } // namespace IServerChannelSinkProvider
} // namespace app::classes::types
