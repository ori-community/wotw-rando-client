#pragma once
#include <Modloader/app/structs/WWiseCinematicScopeAnimatorEntity.h>
#include <Modloader/app/structs/WWiseCinematicScopeAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WWiseCinematicScopeAnimatorEntity {
        inline app::WWiseCinematicScopeAnimatorEntity__Class** type_info() {
            static app::WWiseCinematicScopeAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WWiseCinematicScopeAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WWiseCinematicScopeAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::WWiseCinematicScopeAnimatorEntity__Class>(type_info(), "Moon.Timeline", "WWiseCinematicScopeAnimatorEntity");
        }
        inline app::WWiseCinematicScopeAnimatorEntity* create() {
            return il2cpp::create_object<app::WWiseCinematicScopeAnimatorEntity>(get_class());
        }
    } // namespace WWiseCinematicScopeAnimatorEntity
} // namespace app::classes::types
