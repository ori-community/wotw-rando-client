#pragma once
#include <Modloader/app/structs/IPressurePlate.h>
#include <Modloader/app/structs/IPressurePlate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPressurePlate {
        inline app::IPressurePlate__Class** type_info() {
            static app::IPressurePlate__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPressurePlate__Class**)(modloader::win::memory::resolve_rva(0x04779F58));
            }
            return cache;
        }
        inline app::IPressurePlate__Class* get_class() {
            return il2cpp::get_class<app::IPressurePlate__Class>(type_info(), "", "IPressurePlate");
        }
    } // namespace IPressurePlate
} // namespace app::classes::types
