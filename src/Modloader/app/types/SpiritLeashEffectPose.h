#pragma once
#include <Modloader/app/structs/SpiritLeashEffectPose.h>
#include <Modloader/app/structs/SpiritLeashEffectPose__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashEffectPose {
        inline app::SpiritLeashEffectPose__Class** type_info() {
            static app::SpiritLeashEffectPose__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLeashEffectPose__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLeashEffectPose__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashEffectPose__Class>(type_info(), "", "SpiritLeashEffectPose");
        }
        inline app::SpiritLeashEffectPose* create() {
            return il2cpp::create_object<app::SpiritLeashEffectPose>(get_class());
        }
    } // namespace SpiritLeashEffectPose
} // namespace app::classes::types
