#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonEffectComponentCache {
        namespace {
            app::IMoonEffectComponentCache__Class* type_info_ref = nullptr;
        }
        app::IMoonEffectComponentCache__Class** type_info = &type_info_ref;
        inline app::IMoonEffectComponentCache__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectComponentCache__Class>(type_info, "Moon.EffectsFramework", "IMoonEffectComponentCache");
        }
        inline app::IMoonEffectComponentCache* create() {
            return il2cpp::create_object<app::IMoonEffectComponentCache>(get_class());
        }
    } // namespace IMoonEffectComponentCache
} // namespace app::classes::types
