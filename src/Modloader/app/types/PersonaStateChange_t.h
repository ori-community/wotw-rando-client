#pragma once
#include <Modloader/app/structs/PersonaStateChange_t.h>
#include <Modloader/app/structs/PersonaStateChange_t__Boxed.h>
#include <Modloader/app/structs/PersonaStateChange_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PersonaStateChange_t {
        inline app::PersonaStateChange_t__Class** type_info() {
            static app::PersonaStateChange_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PersonaStateChange_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PersonaStateChange_t__Class* get_class() {
            return il2cpp::get_class<app::PersonaStateChange_t__Class>(type_info(), "Steamworks", "PersonaStateChange_t");
        }
        inline app::PersonaStateChange_t* create() {
            return il2cpp::create_object<app::PersonaStateChange_t>(get_class());
        }
        inline app::PersonaStateChange_t__Boxed* box(app::PersonaStateChange_t value) {
            return il2cpp::box_value<app::PersonaStateChange_t__Boxed>(get_class(), value);
        }
    } // namespace PersonaStateChange_t
} // namespace app::classes::types
