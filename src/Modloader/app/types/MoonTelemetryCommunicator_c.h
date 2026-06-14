#pragma once
#include <Modloader/app/structs/MoonTelemetryCommunicator_c.h>
#include <Modloader/app/structs/MoonTelemetryCommunicator_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCommunicator_c {
        inline app::MoonTelemetryCommunicator_c__Class** type_info() {
            static app::MoonTelemetryCommunicator_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryCommunicator_c__Class**)(modloader::win::memory::resolve_rva(0x04776340));
            }
            return cache;
        }
        inline app::MoonTelemetryCommunicator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryCommunicator_c__Class>(type_info(), "Moon.Network.Web", "MoonTelemetryCommunicator", "<>c");
        }
        inline app::MoonTelemetryCommunicator_c* create() {
            return il2cpp::create_object<app::MoonTelemetryCommunicator_c>(get_class());
        }
    } // namespace MoonTelemetryCommunicator_c
} // namespace app::classes::types
