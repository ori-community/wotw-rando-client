#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameplayToCinematicEntity {
        namespace {
            app::GameplayToCinematicEntity__Class* type_info_ref = nullptr;
        }
        app::GameplayToCinematicEntity__Class** type_info = &type_info_ref;
        inline app::GameplayToCinematicEntity__Class* get_class() {
            return il2cpp::get_class<app::GameplayToCinematicEntity__Class>(type_info, "Moon.Timeline", "GameplayToCinematicEntity");
        }
        inline app::GameplayToCinematicEntity* create() {
            return il2cpp::create_object<app::GameplayToCinematicEntity>(get_class());
        }
    } // namespace GameplayToCinematicEntity
} // namespace app::classes::types
