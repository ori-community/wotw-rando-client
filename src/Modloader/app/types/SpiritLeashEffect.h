#pragma once
#include <Modloader/app/structs/SpiritLeashEffect.h>
#include <Modloader/app/structs/SpiritLeashEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashEffect {
        inline app::SpiritLeashEffect__Class** type_info() {
            static app::SpiritLeashEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLeashEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLeashEffect__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashEffect__Class>(type_info(), "", "SpiritLeashEffect");
        }
        inline app::SpiritLeashEffect* create() {
            return il2cpp::create_object<app::SpiritLeashEffect>(get_class());
        }
    } // namespace SpiritLeashEffect
} // namespace app::classes::types
