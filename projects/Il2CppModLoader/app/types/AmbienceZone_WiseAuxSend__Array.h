#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AmbienceZone_WiseAuxSend__Array {
        namespace {
            app::AmbienceZone_WiseAuxSend__Array__Class* type_info_ref = nullptr;
        }
        app::AmbienceZone_WiseAuxSend__Array__Class** type_info = &type_info_ref;
        inline app::AmbienceZone_WiseAuxSend__Array__Class* get_class() {
            return il2cpp::get_class<app::AmbienceZone_WiseAuxSend__Array__Class>(type_info, "", "AmbienceZone+WiseAuxSend[]");
        }
        inline app::AmbienceZone_WiseAuxSend__Array* create() {
            return il2cpp::create_object<app::AmbienceZone_WiseAuxSend__Array>(get_class());
        }
    } // namespace AmbienceZone_WiseAuxSend__Array
} // namespace app::classes::types
