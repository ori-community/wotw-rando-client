#pragma once
#include <Modloader/app/structs/SoundAnimatorEntity.h>
#include <Modloader/app/structs/SoundAnimatorEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundAnimatorEntity {
        inline app::SoundAnimatorEntity__Class** type_info() {
            static app::SoundAnimatorEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundAnimatorEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundAnimatorEntity__Class* get_class() {
            return il2cpp::get_class<app::SoundAnimatorEntity__Class>(type_info(), "Moon.Timeline", "SoundAnimatorEntity");
        }
        inline app::SoundAnimatorEntity* create() {
            return il2cpp::create_object<app::SoundAnimatorEntity>(get_class());
        }
    } // namespace SoundAnimatorEntity
} // namespace app::classes::types
