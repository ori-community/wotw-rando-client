#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameplayToCinematicEntity {
        namespace {
            inline app::GameplayToCinematicEntity__Class* type_info_ref = nullptr;
        }
        inline app::GameplayToCinematicEntity__Class** type_info = &type_info_ref;
        inline app::GameplayToCinematicEntity__Class* get_class() {
            return il2cpp::get_class<app::GameplayToCinematicEntity__Class>(type_info, "Moon.Timeline", "GameplayToCinematicEntity");
        }
        inline app::GameplayToCinematicEntity* create() {
            return il2cpp::create_object<app::GameplayToCinematicEntity>(get_class());
        }
    } // namespace GameplayToCinematicEntity
} // namespace app::classes::types
