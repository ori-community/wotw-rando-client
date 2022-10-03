#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroundMovingEntity {
        namespace {
            app::GroundMovingEntity__Class* type_info_ref = nullptr;
        }
        app::GroundMovingEntity__Class** type_info = &type_info_ref;
        inline app::GroundMovingEntity__Class* get_class() {
            return il2cpp::get_class<app::GroundMovingEntity__Class>(type_info, "", "GroundMovingEntity");
        }
        inline app::GroundMovingEntity* create() {
            return il2cpp::create_object<app::GroundMovingEntity>(get_class());
        }
    } // namespace GroundMovingEntity
} // namespace app::classes::types
