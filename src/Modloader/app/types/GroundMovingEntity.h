#pragma once
#include <Modloader/app/structs/GroundMovingEntity.h>
#include <Modloader/app/structs/GroundMovingEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GroundMovingEntity {
        inline app::GroundMovingEntity__Class** type_info() {
            static app::GroundMovingEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GroundMovingEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GroundMovingEntity__Class* get_class() {
            return il2cpp::get_class<app::GroundMovingEntity__Class>(type_info(), "", "GroundMovingEntity");
        }
        inline app::GroundMovingEntity* create() {
            return il2cpp::create_object<app::GroundMovingEntity>(get_class());
        }
    } // namespace GroundMovingEntity
} // namespace app::classes::types
