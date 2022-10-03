#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PositionAnimatorEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PositionAnimatorEntity__Class** type_info;
        inline app::PositionAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::PositionAnimatorEntity__Class>(type_info, "Moon.Timeline", "PositionAnimatorEntity");
        }
        inline app::PositionAnimatorEntity* create() {
            return il2cpp::create_object<app::PositionAnimatorEntity>(get_class());
        }
    } // namespace PositionAnimatorEntity
} // namespace app::classes::types
