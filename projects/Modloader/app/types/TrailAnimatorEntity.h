#pragma once
#include <Modloader/app/structs/TrailAnimatorEntity.h>
#include <Modloader/app/structs/TrailAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrailAnimatorEntity {
        inline app::TrailAnimatorEntity__Class** type_info() {
            static app::TrailAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TrailAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TrailAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::TrailAnimatorEntity__Class>(type_info(), "Moon.Timeline", "TrailAnimatorEntity");
        }
        inline app::TrailAnimatorEntity* create() {
            return il2cpp::create_object<app::TrailAnimatorEntity>(get_class());
        }
    } // namespace TrailAnimatorEntity
} // namespace app::classes::types
