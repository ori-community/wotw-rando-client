#pragma once
#include <Modloader/app/structs/IPickupCollector.h>
#include <Modloader/app/structs/IPickupCollector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPickupCollector {
        inline app::IPickupCollector__Class** type_info() {
            static app::IPickupCollector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPickupCollector__Class**)(modloader::win::memory::resolve_rva(0x047044B0));
            }
            return cache;
        }
        inline app::IPickupCollector__Class* get_class() {
            return il2cpp::get_class<app::IPickupCollector__Class>(type_info(), "", "IPickupCollector");
        }
    } // namespace IPickupCollector
} // namespace app::classes::types
