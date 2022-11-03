#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PickupSequenceRestrictZone {
        inline app::PickupSequenceRestrictZone__Class** type_info = (app::PickupSequenceRestrictZone__Class**)(modloader::win::memory::resolve_rva(0x04778FE0));
        inline app::PickupSequenceRestrictZone__Class* get_class() {
            return il2cpp::get_class<app::PickupSequenceRestrictZone__Class>(type_info, "", "PickupSequenceRestrictZone");
        }
        inline app::PickupSequenceRestrictZone* create() {
            return il2cpp::create_object<app::PickupSequenceRestrictZone>(get_class());
        }
        inline app::PickupSequenceRestrictZone__Array* create_array(int size) {
            return il2cpp::array_new<app::PickupSequenceRestrictZone__Array>(get_class(), size);
        }
        inline app::PickupSequenceRestrictZone__Array* create_array(const std::vector<app::PickupSequenceRestrictZone*>& items) {
            return il2cpp::array_new<app::PickupSequenceRestrictZone__Array>(get_class(), items);
        }
    } // namespace PickupSequenceRestrictZone
} // namespace app::classes::types
