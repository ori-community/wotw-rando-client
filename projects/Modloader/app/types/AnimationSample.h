#pragma once
#include <Modloader/app/structs/AnimationSample.h>
#include <Modloader/app/structs/AnimationSample__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationSample {
        inline app::AnimationSample__Class** type_info() {
            static app::AnimationSample__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationSample__Class**)(modloader::win::memory::resolve_rva(0x047009F8));
            }
            return cache;
        }
        inline app::AnimationSample__Class* get_class() {
            return il2cpp::get_class<app::AnimationSample__Class>(type_info(), "Moon.ArtOptimization", "AnimationSample");
        }
        inline app::AnimationSample* create() {
            return il2cpp::create_object<app::AnimationSample>(get_class());
        }
    } // namespace AnimationSample
} // namespace app::classes::types
