#pragma once
#include <Modloader/app/structs/IMoonEffectComponentCache.h>
#include <Modloader/app/structs/IMoonEffectComponentCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMoonEffectComponentCache {
        inline app::IMoonEffectComponentCache__Class** type_info() {
            static app::IMoonEffectComponentCache__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IMoonEffectComponentCache__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IMoonEffectComponentCache__Class* get_class() {
            return il2cpp::get_class<app::IMoonEffectComponentCache__Class>(type_info(), "Moon.EffectsFramework", "IMoonEffectComponentCache");
        }
    } // namespace IMoonEffectComponentCache
} // namespace app::classes::types
