#pragma once
#include <Modloader/app/structs/MaterialEffectPlayable.h>
#include <Modloader/app/structs/MaterialEffectPlayable__Boxed.h>
#include <Modloader/app/structs/MaterialEffectPlayable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaterialEffectPlayable {
        inline app::MaterialEffectPlayable__Class** type_info() {
            static app::MaterialEffectPlayable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaterialEffectPlayable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaterialEffectPlayable__Class* get_class() {
            return il2cpp::get_class<app::MaterialEffectPlayable__Class>(type_info(), "UnityEngine.Experimental.Playables", "MaterialEffectPlayable");
        }
        inline app::MaterialEffectPlayable* create() {
            return il2cpp::create_object<app::MaterialEffectPlayable>(get_class());
        }
        inline app::MaterialEffectPlayable__Boxed* box(app::MaterialEffectPlayable value) {
            return il2cpp::box_value<app::MaterialEffectPlayable__Boxed>(get_class(), value);
        }
    } // namespace MaterialEffectPlayable
} // namespace app::classes::types
