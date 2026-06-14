#pragma once
#include <Modloader/app/structs/ScaleAnimatorEntity.h>
#include <Modloader/app/structs/ScaleAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaleAnimatorEntity {
        inline app::ScaleAnimatorEntity__Class** type_info() {
            static app::ScaleAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaleAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaleAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::ScaleAnimatorEntity__Class>(type_info(), "Moon.Timeline", "ScaleAnimatorEntity");
        }
        inline app::ScaleAnimatorEntity* create() {
            return il2cpp::create_object<app::ScaleAnimatorEntity>(get_class());
        }
    } // namespace ScaleAnimatorEntity
} // namespace app::classes::types
