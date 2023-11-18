#pragma once
#include <Modloader/app/structs/AnimationOffsetPlayable.h>
#include <Modloader/app/structs/AnimationOffsetPlayable__Boxed.h>
#include <Modloader/app/structs/AnimationOffsetPlayable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationOffsetPlayable {
        inline app::AnimationOffsetPlayable__Class** type_info() {
            static app::AnimationOffsetPlayable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationOffsetPlayable__Class**)(modloader::win::memory::resolve_rva(0x04731218));
            }
            return cache;
        }
        inline app::AnimationOffsetPlayable__Class* get_class() {
            return il2cpp::get_class<app::AnimationOffsetPlayable__Class>(type_info(), "UnityEngine.Animations", "AnimationOffsetPlayable");
        }
        inline app::AnimationOffsetPlayable* create() {
            return il2cpp::create_object<app::AnimationOffsetPlayable>(get_class());
        }
        inline app::AnimationOffsetPlayable__Boxed* box(app::AnimationOffsetPlayable value) {
            return il2cpp::box_value<app::AnimationOffsetPlayable__Boxed>(get_class(), value);
        }
    } // namespace AnimationOffsetPlayable
} // namespace app::classes::types
