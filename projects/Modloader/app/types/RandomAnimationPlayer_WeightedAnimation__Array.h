#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RandomAnimationPlayer_WeightedAnimation__Array {
        namespace {
            inline app::RandomAnimationPlayer_WeightedAnimation__Array__Class* type_info_ref = nullptr;
        }
        inline app::RandomAnimationPlayer_WeightedAnimation__Array__Class** type_info = &type_info_ref;
        inline app::RandomAnimationPlayer_WeightedAnimation__Array__Class* get_class() {
            return il2cpp::get_class<app::RandomAnimationPlayer_WeightedAnimation__Array__Class>(type_info, "", "RandomAnimationPlayer+WeightedAnimation[]");
        }
        inline app::RandomAnimationPlayer_WeightedAnimation__Array* create() {
            return il2cpp::create_object<app::RandomAnimationPlayer_WeightedAnimation__Array>(get_class());
        }
    } // namespace RandomAnimationPlayer_WeightedAnimation__Array
} // namespace app::classes::types
