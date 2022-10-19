#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransformAnimatorEntity {
        namespace {
            inline app::TransformAnimatorEntity__Class* type_info_ref = nullptr;
        }
        inline app::TransformAnimatorEntity__Class** type_info = &type_info_ref;
        inline app::TransformAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::TransformAnimatorEntity__Class>(type_info, "Moon.Timeline", "TransformAnimatorEntity");
        }
        inline app::TransformAnimatorEntity* create() {
            return il2cpp::create_object<app::TransformAnimatorEntity>(get_class());
        }
    } // namespace TransformAnimatorEntity
} // namespace app::classes::types
