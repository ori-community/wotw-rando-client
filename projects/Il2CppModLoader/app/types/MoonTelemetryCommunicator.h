#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCommunicator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryCommunicator__Class** type_info;
        inline app::MoonTelemetryCommunicator__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCommunicator__Class>(type_info, "Moon.Network.Web", "MoonTelemetryCommunicator");
        }
        inline app::MoonTelemetryCommunicator* create() {
            return il2cpp::create_object<app::MoonTelemetryCommunicator>(get_class());
        }
    } // namespace MoonTelemetryCommunicator
} // namespace app::classes::types
