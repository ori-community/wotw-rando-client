#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PickupSequenceRestrictZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PickupSequenceRestrictZone__Class** type_info;
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
