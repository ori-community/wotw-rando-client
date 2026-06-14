#pragma once
#include <Modloader/app/structs/GlowChargeEffect.h>
#include <Modloader/app/structs/GlowChargeEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlowChargeEffect {
        inline app::GlowChargeEffect__Class** type_info() {
            static app::GlowChargeEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlowChargeEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlowChargeEffect__Class* get_class() {
            return il2cpp::get_class<app::GlowChargeEffect__Class>(type_info(), "", "GlowChargeEffect");
        }
        inline app::GlowChargeEffect* create() {
            return il2cpp::create_object<app::GlowChargeEffect>(get_class());
        }
    } // namespace GlowChargeEffect
} // namespace app::classes::types
