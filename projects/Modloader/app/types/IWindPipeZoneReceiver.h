#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IWindPipeZoneReceiver {
        inline app::IWindPipeZoneReceiver__Class** type_info = (app::IWindPipeZoneReceiver__Class**)(modloader::win::memory::resolve_rva(0x0473D038));
        inline app::IWindPipeZoneReceiver__Class* get_class() {
            return il2cpp::get_class<app::IWindPipeZoneReceiver__Class>(type_info, "", "IWindPipeZoneReceiver");
        }
    } // namespace IWindPipeZoneReceiver
} // namespace app::classes::types
