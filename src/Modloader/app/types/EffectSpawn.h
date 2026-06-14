#pragma once
#include <Modloader/app/structs/EffectSpawn.h>
#include <Modloader/app/structs/EffectSpawn__Boxed.h>
#include <Modloader/app/structs/EffectSpawn__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EffectSpawn {
        inline app::EffectSpawn__Class** type_info() {
            static app::EffectSpawn__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EffectSpawn__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EffectSpawn__Class* get_class() {
            return il2cpp::get_class<app::EffectSpawn__Class>(type_info(), "", "EffectSpawn");
        }
        inline app::EffectSpawn* create() {
            return il2cpp::create_object<app::EffectSpawn>(get_class());
        }
        inline app::EffectSpawn__Boxed* box(app::EffectSpawn value) {
            return il2cpp::box_value<app::EffectSpawn__Boxed>(get_class(), value);
        }
    } // namespace EffectSpawn
} // namespace app::classes::types
