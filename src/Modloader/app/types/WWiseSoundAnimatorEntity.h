#pragma once
#include <Modloader/app/structs/WWiseSoundAnimatorEntity.h>
#include <Modloader/app/structs/WWiseSoundAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WWiseSoundAnimatorEntity {
        inline app::WWiseSoundAnimatorEntity__Class** type_info() {
            static app::WWiseSoundAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WWiseSoundAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WWiseSoundAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::WWiseSoundAnimatorEntity__Class>(type_info(), "Moon.Timeline", "WWiseSoundAnimatorEntity");
        }
        inline app::WWiseSoundAnimatorEntity* create() {
            return il2cpp::create_object<app::WWiseSoundAnimatorEntity>(get_class());
        }
    } // namespace WWiseSoundAnimatorEntity
} // namespace app::classes::types
