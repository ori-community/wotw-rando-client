#pragma once
#include <Modloader/app/structs/IClientChannelSinkProvider.h>
#include <Modloader/app/structs/IClientChannelSinkProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IClientChannelSinkProvider {
        inline app::IClientChannelSinkProvider__Class** type_info() {
            static app::IClientChannelSinkProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IClientChannelSinkProvider__Class**)(modloader::win::memory::resolve_rva(0x047555C8));
            }
            return cache;
        }
        inline app::IClientChannelSinkProvider__Class* get_class() {
            return il2cpp::get_class<app::IClientChannelSinkProvider__Class>(type_info(), "System.Runtime.Remoting.Channels", "IClientChannelSinkProvider");
        }
    } // namespace IClientChannelSinkProvider
} // namespace app::classes::types
