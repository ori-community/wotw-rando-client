#pragma once
#include <Modloader/app/structs/RecorderAnimatorEntity.h>
#include <Modloader/app/structs/RecorderAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderAnimatorEntity {
        inline app::RecorderAnimatorEntity__Class** type_info() {
            static app::RecorderAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecorderAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecorderAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::RecorderAnimatorEntity__Class>(type_info(), "Moon.Timeline", "RecorderAnimatorEntity");
        }
        inline app::RecorderAnimatorEntity* create() {
            return il2cpp::create_object<app::RecorderAnimatorEntity>(get_class());
        }
    } // namespace RecorderAnimatorEntity
} // namespace app::classes::types
