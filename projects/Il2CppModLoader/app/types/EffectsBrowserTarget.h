#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EffectsBrowserTarget {
        namespace {
            inline app::EffectsBrowserTarget__Class* type_info_ref = nullptr;
        }
        inline app::EffectsBrowserTarget__Class** type_info = &type_info_ref;
        inline app::EffectsBrowserTarget__Class* get_class() {
            return il2cpp::get_class<app::EffectsBrowserTarget__Class>(type_info, "Moon.EffectsFramework", "EffectsBrowserTarget");
        }
        inline app::EffectsBrowserTarget* create() {
            return il2cpp::create_object<app::EffectsBrowserTarget>(get_class());
        }
    } // namespace EffectsBrowserTarget
} // namespace app::classes::types
