#pragma once
#include <Modloader/app/structs/IPlayFabTransportPlugin.h>
#include <Modloader/app/structs/IPlayFabTransportPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPlayFabTransportPlugin {
        inline app::IPlayFabTransportPlugin__Class** type_info() {
            static app::IPlayFabTransportPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPlayFabTransportPlugin__Class**)(modloader::win::memory::resolve_rva(0x04727898));
            }
            return cache;
        }
        inline app::IPlayFabTransportPlugin__Class* get_class() {
            return il2cpp::get_class<app::IPlayFabTransportPlugin__Class>(type_info(), "PlayFab", "IPlayFabTransportPlugin");
        }
    } // namespace IPlayFabTransportPlugin
} // namespace app::classes::types
