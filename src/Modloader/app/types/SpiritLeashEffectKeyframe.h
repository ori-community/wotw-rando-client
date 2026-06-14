#pragma once
#include <Modloader/app/structs/SpiritLeashEffectKeyframe.h>
#include <Modloader/app/structs/SpiritLeashEffectKeyframe__Array.h>
#include <Modloader/app/structs/SpiritLeashEffectKeyframe__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashEffectKeyframe {
        inline app::SpiritLeashEffectKeyframe__Class** type_info() {
            static app::SpiritLeashEffectKeyframe__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLeashEffectKeyframe__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLeashEffectKeyframe__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashEffectKeyframe__Class>(type_info(), "", "SpiritLeashEffectKeyframe");
        }
        inline app::SpiritLeashEffectKeyframe* create() {
            return il2cpp::create_object<app::SpiritLeashEffectKeyframe>(get_class());
        }
        inline app::SpiritLeashEffectKeyframe__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritLeashEffectKeyframe__Array>(get_class(), size);
        }
        inline app::SpiritLeashEffectKeyframe__Array* create_array(const std::vector<app::SpiritLeashEffectKeyframe*>& items) {
            return il2cpp::array_new<app::SpiritLeashEffectKeyframe__Array>(get_class(), items);
        }
    } // namespace SpiritLeashEffectKeyframe
} // namespace app::classes::types
