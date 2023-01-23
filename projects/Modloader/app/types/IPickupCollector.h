#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPickupCollector__Class.h>

namespace app::classes::types {
    namespace IPickupCollector {
        inline app::IPickupCollector__Class** type_info = (app::IPickupCollector__Class**)(modloader::win::memory::resolve_rva(0x047044B0));
        inline app::IPickupCollector__Class* get_class() {
            return il2cpp::get_class<app::IPickupCollector__Class>(type_info, "", "IPickupCollector");
        }
    } // namespace IPickupCollector
} // namespace app::classes::types
