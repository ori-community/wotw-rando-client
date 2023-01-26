#pragma once
#include <Modloader/app/structs/EffectsBrowserTarget.h>
#include <Modloader/app/structs/EffectsBrowserTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EffectsBrowserTarget {
        inline app::EffectsBrowserTarget__Class** type_info() {
            static app::EffectsBrowserTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EffectsBrowserTarget__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EffectsBrowserTarget__Class* get_class() {
            return il2cpp::get_class<app::EffectsBrowserTarget__Class>(type_info(), "Moon.EffectsFramework", "EffectsBrowserTarget");
        }
        inline app::EffectsBrowserTarget* create() {
            return il2cpp::create_object<app::EffectsBrowserTarget>(get_class());
        }
    } // namespace EffectsBrowserTarget
} // namespace app::classes::types
