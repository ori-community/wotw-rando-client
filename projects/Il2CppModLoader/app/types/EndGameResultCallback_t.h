#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EndGameResultCallback_t {
        namespace {
            app::EndGameResultCallback_t__Class* type_info_ref = nullptr;
        }
        app::EndGameResultCallback_t__Class** type_info = &type_info_ref;
        inline app::EndGameResultCallback_t__Class* get_class() {
            return il2cpp::get_class<app::EndGameResultCallback_t__Class>(type_info, "Steamworks", "EndGameResultCallback_t");
        }
        inline app::EndGameResultCallback_t* create() {
            return il2cpp::create_object<app::EndGameResultCallback_t>(get_class());
        }
        inline app::EndGameResultCallback_t__Boxed* box(app::EndGameResultCallback_t value) {
            return il2cpp::box_value<app::EndGameResultCallback_t__Boxed>(get_class(), value);
        }
    } // namespace EndGameResultCallback_t
} // namespace app::classes::types
