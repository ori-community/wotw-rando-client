#pragma once
#include <Modloader/app/structs/PlayerStateMap_Mapping.h>
#include <Modloader/app/structs/PlayerStateMap_Mapping__Array.h>
#include <Modloader/app/structs/PlayerStateMap_Mapping__Boxed.h>
#include <Modloader/app/structs/PlayerStateMap_Mapping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerStateMap_Mapping {
        inline app::PlayerStateMap_Mapping__Class** type_info() {
            static app::PlayerStateMap_Mapping__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerStateMap_Mapping__Class**)(modloader::win::memory::resolve_rva(0x04702160));
            }
            return cache;
        }
        inline app::PlayerStateMap_Mapping__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerStateMap_Mapping__Class>(type_info(), "Moon.uberSerializationWisp", "PlayerStateMap", "Mapping");
        }
        inline app::PlayerStateMap_Mapping* create() {
            return il2cpp::create_object<app::PlayerStateMap_Mapping>(get_class());
        }
        inline app::PlayerStateMap_Mapping__Boxed* box(app::PlayerStateMap_Mapping value) {
            return il2cpp::box_value<app::PlayerStateMap_Mapping__Boxed>(get_class(), value);
        }
        inline app::PlayerStateMap_Mapping__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerStateMap_Mapping__Array>(get_class(), size);
        }
        inline app::PlayerStateMap_Mapping__Array* create_array(const std::vector<app::PlayerStateMap_Mapping>& items) {
            return il2cpp::array_new<app::PlayerStateMap_Mapping__Array>(get_class(), items);
        }
    } // namespace PlayerStateMap_Mapping
} // namespace app::classes::types
