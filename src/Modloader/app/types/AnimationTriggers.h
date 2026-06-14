#pragma once
#include <Modloader/app/structs/AnimationTriggers.h>
#include <Modloader/app/structs/AnimationTriggers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationTriggers {
        inline app::AnimationTriggers__Class** type_info() {
            static app::AnimationTriggers__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationTriggers__Class**)(modloader::win::memory::resolve_rva(0x04768588));
            }
            return cache;
        }
        inline app::AnimationTriggers__Class* get_class() {
            return il2cpp::get_class<app::AnimationTriggers__Class>(type_info(), "UnityEngine.UI", "AnimationTriggers");
        }
        inline app::AnimationTriggers* create() {
            return il2cpp::create_object<app::AnimationTriggers>(get_class());
        }
    } // namespace AnimationTriggers
} // namespace app::classes::types
