#pragma once
#include <Modloader/app/structs/AnimationScriptPlayable.h>
#include <Modloader/app/structs/AnimationScriptPlayable__Boxed.h>
#include <Modloader/app/structs/AnimationScriptPlayable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationScriptPlayable {
        inline app::AnimationScriptPlayable__Class** type_info() {
            static app::AnimationScriptPlayable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationScriptPlayable__Class**)(modloader::win::memory::resolve_rva(0x0472F418));
            }
            return cache;
        }
        inline app::AnimationScriptPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationScriptPlayable__Class>(type_info(), "UnityEngine.Experimental.Animations", "AnimationScriptPlayable");
        }
        inline app::AnimationScriptPlayable* create() {
            return il2cpp::create_object<app::AnimationScriptPlayable>(get_class());
        }
        inline app::AnimationScriptPlayable__Boxed* box(app::AnimationScriptPlayable value) {
            return il2cpp::box_value<app::AnimationScriptPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationScriptPlayable
} // namespace app::classes::types
