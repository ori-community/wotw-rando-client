#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashEffectKeyframe {
        namespace {
            app::SpiritLeashEffectKeyframe__Class* type_info_ref = nullptr;
        }
        app::SpiritLeashEffectKeyframe__Class** type_info = &type_info_ref;
        inline app::SpiritLeashEffectKeyframe__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashEffectKeyframe__Class>(type_info, "", "SpiritLeashEffectKeyframe");
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
