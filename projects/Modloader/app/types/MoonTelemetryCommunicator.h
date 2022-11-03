#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryCommunicator {
        inline app::MoonTelemetryCommunicator__Class** type_info = (app::MoonTelemetryCommunicator__Class**)(modloader::win::memory::resolve_rva(0x04725BB8));
        inline app::MoonTelemetryCommunicator__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCommunicator__Class>(type_info, "Moon.Network.Web", "MoonTelemetryCommunicator");
        }
        inline app::MoonTelemetryCommunicator* create() {
            return il2cpp::create_object<app::MoonTelemetryCommunicator>(get_class());
        }
    } // namespace MoonTelemetryCommunicator
} // namespace app::classes::types
