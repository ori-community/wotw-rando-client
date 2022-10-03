#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetPersonaNameResponse_t {
        namespace {
            app::SetPersonaNameResponse_t__Class* type_info_ref = nullptr;
        }
        app::SetPersonaNameResponse_t__Class** type_info = &type_info_ref;
        inline app::SetPersonaNameResponse_t__Class* get_class() {
            return il2cpp::get_class<app::SetPersonaNameResponse_t__Class>(type_info, "Steamworks", "SetPersonaNameResponse_t");
        }
        inline app::SetPersonaNameResponse_t* create() {
            return il2cpp::create_object<app::SetPersonaNameResponse_t>(get_class());
        }
        inline app::SetPersonaNameResponse_t__Boxed* box(app::SetPersonaNameResponse_t value) {
            return il2cpp::box_value<app::SetPersonaNameResponse_t__Boxed>(get_class(), value);
        }
    } // namespace SetPersonaNameResponse_t
} // namespace app::classes::types
