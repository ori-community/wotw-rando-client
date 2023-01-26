#pragma once
#include <Modloader/app/structs/GlowEffect.h>
#include <Modloader/app/structs/GlowEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlowEffect {
        inline app::GlowEffect__Class** type_info() {
            static app::GlowEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlowEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlowEffect__Class* get_class() {
            return il2cpp::get_class<app::GlowEffect__Class>(type_info(), "", "GlowEffect");
        }
        inline app::GlowEffect* create() {
            return il2cpp::create_object<app::GlowEffect>(get_class());
        }
    } // namespace GlowEffect
} // namespace app::classes::types
