#pragma once
#include <Modloader/app/structs/SpiritLeashEffectKeyframe__Array.h>
#include <Modloader/app/structs/SpiritLeashEffectKeyframe__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashEffectKeyframe__Array {
        inline app::SpiritLeashEffectKeyframe__Array__Class** type_info() {
            static app::SpiritLeashEffectKeyframe__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLeashEffectKeyframe__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLeashEffectKeyframe__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashEffectKeyframe__Array__Class>(type_info(), "", "SpiritLeashEffectKeyframe[]");
        }
        inline app::SpiritLeashEffectKeyframe__Array* create() {
            return il2cpp::create_object<app::SpiritLeashEffectKeyframe__Array>(get_class());
        }
    } // namespace SpiritLeashEffectKeyframe__Array
} // namespace app::classes::types
