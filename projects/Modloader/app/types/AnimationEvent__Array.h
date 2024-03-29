#pragma once
#include <Modloader/app/structs/AnimationEvent__Array.h>
#include <Modloader/app/structs/AnimationEvent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationEvent__Array {
        inline app::AnimationEvent__Array__Class** type_info() {
            static app::AnimationEvent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationEvent__Array__Class**)(modloader::win::memory::resolve_rva(0x04703B10));
            }
            return cache;
        }
        inline app::AnimationEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationEvent__Array__Class>(type_info(), "UnityEngine", "AnimationEvent[]");
        }
        inline app::AnimationEvent__Array* create() {
            return il2cpp::create_object<app::AnimationEvent__Array>(get_class());
        }
    } // namespace AnimationEvent__Array
} // namespace app::classes::types
