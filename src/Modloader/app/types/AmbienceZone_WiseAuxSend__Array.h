#pragma once
#include <Modloader/app/structs/AmbienceZone_WiseAuxSend__Array.h>
#include <Modloader/app/structs/AmbienceZone_WiseAuxSend__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmbienceZone_WiseAuxSend__Array {
        inline app::AmbienceZone_WiseAuxSend__Array__Class** type_info() {
            static app::AmbienceZone_WiseAuxSend__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AmbienceZone_WiseAuxSend__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AmbienceZone_WiseAuxSend__Array__Class* get_class() {
            return il2cpp::get_class<app::AmbienceZone_WiseAuxSend__Array__Class>(type_info(), "", "AmbienceZone+WiseAuxSend[]");
        }
        inline app::AmbienceZone_WiseAuxSend__Array* create() {
            return il2cpp::create_object<app::AmbienceZone_WiseAuxSend__Array>(get_class());
        }
    } // namespace AmbienceZone_WiseAuxSend__Array
} // namespace app::classes::types
