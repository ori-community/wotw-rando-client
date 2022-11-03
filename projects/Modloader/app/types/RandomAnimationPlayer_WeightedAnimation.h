#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RandomAnimationPlayer_WeightedAnimation {
        namespace {
            inline app::RandomAnimationPlayer_WeightedAnimation__Class* type_info_ref = nullptr;
        }
        inline app::RandomAnimationPlayer_WeightedAnimation__Class** type_info = &type_info_ref;
        inline app::RandomAnimationPlayer_WeightedAnimation__Class* get_class() {
            return il2cpp::get_nested_class<app::RandomAnimationPlayer_WeightedAnimation__Class>(type_info, "", "RandomAnimationPlayer", "WeightedAnimation");
        }
        inline app::RandomAnimationPlayer_WeightedAnimation* create() {
            return il2cpp::create_object<app::RandomAnimationPlayer_WeightedAnimation>(get_class());
        }
        inline app::RandomAnimationPlayer_WeightedAnimation__Array* create_array(int size) {
            return il2cpp::array_new<app::RandomAnimationPlayer_WeightedAnimation__Array>(get_class(), size);
        }
        inline app::RandomAnimationPlayer_WeightedAnimation__Array* create_array(const std::vector<app::RandomAnimationPlayer_WeightedAnimation*>& items) {
            return il2cpp::array_new<app::RandomAnimationPlayer_WeightedAnimation__Array>(get_class(), items);
        }
    } // namespace RandomAnimationPlayer_WeightedAnimation
} // namespace app::classes::types
