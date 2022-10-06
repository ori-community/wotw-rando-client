#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerStateMap_Mapping {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerStateMap_Mapping__Class** type_info;
        inline app::PlayerStateMap_Mapping__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerStateMap_Mapping__Class>(type_info, "Moon.uberSerializationWisp", "PlayerStateMap", "Mapping");
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
        inline app::PlayerStateMap_Mapping__Array* create_array(const std::vector<app::PlayerStateMap_Mapping__Boxed>& items) {
            return il2cpp::array_new<app::PlayerStateMap_Mapping__Array>(get_class(), items);
        }
    } // namespace PlayerStateMap_Mapping
} // namespace app::classes::types
