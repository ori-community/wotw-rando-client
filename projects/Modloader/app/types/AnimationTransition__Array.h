#pragma once
#include <Modloader/app/structs/AnimationTransition__Array.h>
#include <Modloader/app/structs/AnimationTransition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationTransition__Array {
        inline app::AnimationTransition__Array__Class** type_info() {
            static app::AnimationTransition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationTransition__Array__Class**)(modloader::win::memory::resolve_rva(0x04724890));
            }
            return cache;
        }
        inline app::AnimationTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationTransition__Array__Class>(type_info(), "Moon", "AnimationTransition[]");
        }
        inline app::AnimationTransition__Array* create() {
            return il2cpp::create_object<app::AnimationTransition__Array>(get_class());
        }
    } // namespace AnimationTransition__Array
} // namespace app::classes::types
