#pragma once
#include <Modloader/app/structs/IWindPipeZoneReceiver.h>
#include <Modloader/app/structs/IWindPipeZoneReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IWindPipeZoneReceiver {
        inline app::IWindPipeZoneReceiver__Class** type_info() {
            static app::IWindPipeZoneReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IWindPipeZoneReceiver__Class**)(modloader::win::memory::resolve_rva(0x0473D038));
            }
            return cache;
        }
        inline app::IWindPipeZoneReceiver__Class* get_class() {
            return il2cpp::get_class<app::IWindPipeZoneReceiver__Class>(type_info(), "", "IWindPipeZoneReceiver");
        }
    } // namespace IWindPipeZoneReceiver
} // namespace app::classes::types
