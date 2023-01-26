#pragma once
#include <Modloader/app/structs/RandomAnimationPlayer_WeightedAnimation__Array.h>
#include <Modloader/app/structs/RandomAnimationPlayer_WeightedAnimation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RandomAnimationPlayer_WeightedAnimation__Array {
        inline app::RandomAnimationPlayer_WeightedAnimation__Array__Class** type_info() {
            static app::RandomAnimationPlayer_WeightedAnimation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RandomAnimationPlayer_WeightedAnimation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RandomAnimationPlayer_WeightedAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::RandomAnimationPlayer_WeightedAnimation__Array__Class>(type_info(), "", "RandomAnimationPlayer+WeightedAnimation[]");
        }
        inline app::RandomAnimationPlayer_WeightedAnimation__Array* create() {
            return il2cpp::create_object<app::RandomAnimationPlayer_WeightedAnimation__Array>(get_class());
        }
    } // namespace RandomAnimationPlayer_WeightedAnimation__Array
} // namespace app::classes::types
