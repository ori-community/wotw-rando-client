#pragma once
#include <Modloader/app/structs/IOneDSTransportPlugin.h>
#include <Modloader/app/structs/IOneDSTransportPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IOneDSTransportPlugin {
        inline app::IOneDSTransportPlugin__Class** type_info() {
            static app::IOneDSTransportPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IOneDSTransportPlugin__Class**)(modloader::win::memory::resolve_rva(0x04704B50));
            }
            return cache;
        }
        inline app::IOneDSTransportPlugin__Class* get_class() {
            return il2cpp::get_class<app::IOneDSTransportPlugin__Class>(type_info(), "PlayFab", "IOneDSTransportPlugin");
        }
    } // namespace IOneDSTransportPlugin
} // namespace app::classes::types
