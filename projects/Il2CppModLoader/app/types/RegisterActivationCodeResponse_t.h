#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RegisterActivationCodeResponse_t {
        namespace {
            app::RegisterActivationCodeResponse_t__Class* type_info_ref = nullptr;
        }
        app::RegisterActivationCodeResponse_t__Class** type_info = &type_info_ref;
        inline app::RegisterActivationCodeResponse_t__Class* get_class() {
            return il2cpp::get_class<app::RegisterActivationCodeResponse_t__Class>(type_info, "Steamworks", "RegisterActivationCodeResponse_t");
        }
        inline app::RegisterActivationCodeResponse_t* create() {
            return il2cpp::create_object<app::RegisterActivationCodeResponse_t>(get_class());
        }
        inline app::RegisterActivationCodeResponse_t__Boxed* box(app::RegisterActivationCodeResponse_t value) {
            return il2cpp::box_value<app::RegisterActivationCodeResponse_t__Boxed>(get_class(), value);
        }
    } // namespace RegisterActivationCodeResponse_t
} // namespace app::classes::types
