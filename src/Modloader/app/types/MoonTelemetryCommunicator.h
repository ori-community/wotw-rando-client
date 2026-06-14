#pragma once
#include <Modloader/app/structs/MoonTelemetryCommunicator.h>
#include <Modloader/app/structs/MoonTelemetryCommunicator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCommunicator {
        inline app::MoonTelemetryCommunicator__Class** type_info() {
            static app::MoonTelemetryCommunicator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryCommunicator__Class**)(modloader::win::memory::resolve_rva(0x04725BB8));
            }
            return cache;
        }
        inline app::MoonTelemetryCommunicator__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCommunicator__Class>(type_info(), "Moon.Network.Web", "MoonTelemetryCommunicator");
        }
        inline app::MoonTelemetryCommunicator* create() {
            return il2cpp::create_object<app::MoonTelemetryCommunicator>(get_class());
        }
    } // namespace MoonTelemetryCommunicator
} // namespace app::classes::types
