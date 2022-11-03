#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayerUberStateAreaMapInformation {
        inline app::PlayerUberStateAreaMapInformation__Class** type_info = (app::PlayerUberStateAreaMapInformation__Class**)(modloader::win::memory::resolve_rva(0x04797228));
        inline app::PlayerUberStateAreaMapInformation__Class* get_class() {
            return il2cpp::get_class<app::PlayerUberStateAreaMapInformation__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateAreaMapInformation");
        }
        inline app::PlayerUberStateAreaMapInformation* create() {
            return il2cpp::create_object<app::PlayerUberStateAreaMapInformation>(get_class());
        }
    } // namespace PlayerUberStateAreaMapInformation
} // namespace app::classes::types
