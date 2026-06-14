#pragma once
#include <Modloader/app/structs/WindImpactEffectSpawner.h>
#include <Modloader/app/structs/WindImpactEffectSpawner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindImpactEffectSpawner {
        inline app::WindImpactEffectSpawner__Class** type_info() {
            static app::WindImpactEffectSpawner__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindImpactEffectSpawner__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindImpactEffectSpawner__Class* get_class() {
            return il2cpp::get_class<app::WindImpactEffectSpawner__Class>(type_info(), "", "WindImpactEffectSpawner");
        }
        inline app::WindImpactEffectSpawner* create() {
            return il2cpp::create_object<app::WindImpactEffectSpawner>(get_class());
        }
    } // namespace WindImpactEffectSpawner
} // namespace app::classes::types
