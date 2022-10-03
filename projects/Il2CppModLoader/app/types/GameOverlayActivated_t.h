#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameOverlayActivated_t {
        namespace {
            app::GameOverlayActivated_t__Class* type_info_ref = nullptr;
        }
        app::GameOverlayActivated_t__Class** type_info = &type_info_ref;
        inline app::GameOverlayActivated_t__Class* get_class() {
            return il2cpp::get_class<app::GameOverlayActivated_t__Class>(type_info, "Steamworks", "GameOverlayActivated_t");
        }
        inline app::GameOverlayActivated_t* create() {
            return il2cpp::create_object<app::GameOverlayActivated_t>(get_class());
        }
        inline app::GameOverlayActivated_t__Boxed* box(app::GameOverlayActivated_t value) {
            return il2cpp::box_value<app::GameOverlayActivated_t__Boxed>(get_class(), value);
        }
    } // namespace GameOverlayActivated_t
} // namespace app::classes::types
