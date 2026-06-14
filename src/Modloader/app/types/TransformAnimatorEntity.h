#pragma once
#include <Modloader/app/structs/TransformAnimatorEntity.h>
#include <Modloader/app/structs/TransformAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformAnimatorEntity {
        inline app::TransformAnimatorEntity__Class** type_info() {
            static app::TransformAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::TransformAnimatorEntity__Class>(type_info(), "Moon.Timeline", "TransformAnimatorEntity");
        }
        inline app::TransformAnimatorEntity* create() {
            return il2cpp::create_object<app::TransformAnimatorEntity>(get_class());
        }
    } // namespace TransformAnimatorEntity
} // namespace app::classes::types
