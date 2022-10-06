#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AmbienceZone_WiseAuxSend {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AmbienceZone_WiseAuxSend__Class** type_info;
        inline app::AmbienceZone_WiseAuxSend__Class* get_class() {
            return il2cpp::get_nested_class<app::AmbienceZone_WiseAuxSend__Class>(type_info, "", "AmbienceZone", "WiseAuxSend");
        }
        inline app::AmbienceZone_WiseAuxSend* create() {
            return il2cpp::create_object<app::AmbienceZone_WiseAuxSend>(get_class());
        }
        inline app::AmbienceZone_WiseAuxSend__Boxed* box(app::AmbienceZone_WiseAuxSend value) {
            return il2cpp::box_value<app::AmbienceZone_WiseAuxSend__Boxed>(get_class(), value);
        }
        inline app::AmbienceZone_WiseAuxSend__Array* create_array(int size) {
            return il2cpp::array_new<app::AmbienceZone_WiseAuxSend__Array>(get_class(), size);
        }
        inline app::AmbienceZone_WiseAuxSend__Array* create_array(const std::vector<app::AmbienceZone_WiseAuxSend__Boxed>& items) {
            return il2cpp::array_new<app::AmbienceZone_WiseAuxSend__Array>(get_class(), items);
        }
    } // namespace AmbienceZone_WiseAuxSend
} // namespace app::classes::types
