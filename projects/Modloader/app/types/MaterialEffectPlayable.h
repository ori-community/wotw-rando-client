#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaterialEffectPlayable__Class.h>
#include <Modloader/app/structs/MaterialEffectPlayable.h>
#include <Modloader/app/structs/MaterialEffectPlayable__Boxed.h>

namespace app::classes::types {
    namespace MaterialEffectPlayable {
        namespace {
            inline app::MaterialEffectPlayable__Class* type_info_ref = nullptr;
        }
        inline app::MaterialEffectPlayable__Class** type_info = &type_info_ref;
        inline app::MaterialEffectPlayable__Class* get_class() {
            return il2cpp::get_class<app::MaterialEffectPlayable__Class>(type_info, "UnityEngine.Experimental.Playables", "MaterialEffectPlayable");
        }
        inline app::MaterialEffectPlayable* create() {
            return il2cpp::create_object<app::MaterialEffectPlayable>(get_class());
        }
        inline app::MaterialEffectPlayable__Boxed* box(app::MaterialEffectPlayable value) {
            return il2cpp::box_value<app::MaterialEffectPlayable__Boxed>(get_class(), value);
        }
    } // namespace MaterialEffectPlayable
} // namespace app::classes::types
