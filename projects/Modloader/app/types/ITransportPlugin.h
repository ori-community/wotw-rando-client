#pragma once
#include <Modloader/app/structs/ITransportPlugin.h>
#include <Modloader/app/structs/ITransportPlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ITransportPlugin {
        inline app::ITransportPlugin__Class** type_info() {
            static app::ITransportPlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ITransportPlugin__Class**)(modloader::win::memory::resolve_rva(0x04724460));
            }
            return cache;
        }
        inline app::ITransportPlugin__Class* get_class() {
            return il2cpp::get_class<app::ITransportPlugin__Class>(type_info(), "PlayFab", "ITransportPlugin");
        }
    } // namespace ITransportPlugin
} // namespace app::classes::types
