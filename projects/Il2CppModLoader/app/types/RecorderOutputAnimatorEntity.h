#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecorderOutputAnimatorEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecorderOutputAnimatorEntity__Class** type_info;
        inline app::RecorderOutputAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::RecorderOutputAnimatorEntity__Class>(type_info, "Moon.Timeline", "RecorderOutputAnimatorEntity");
        }
        inline app::RecorderOutputAnimatorEntity* create() {
            return il2cpp::create_object<app::RecorderOutputAnimatorEntity>(get_class());
        }
    } // namespace RecorderOutputAnimatorEntity
} // namespace app::classes::types
