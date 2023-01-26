#pragma once
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/AnimationPlayer__Array.h>
#include <Modloader/app/structs/AnimationPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationPlayer {
        inline app::AnimationPlayer__Class** type_info() {
            static app::AnimationPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AnimationPlayer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::AnimationPlayer__Class>(type_info(), "Moon", "AnimationPlayer");
        }
        inline app::AnimationPlayer* create() {
            return il2cpp::create_object<app::AnimationPlayer>(get_class());
        }
        inline app::AnimationPlayer__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationPlayer__Array>(get_class(), size);
        }
        inline app::AnimationPlayer__Array* create_array(const std::vector<app::AnimationPlayer*>& items) {
            return il2cpp::array_new<app::AnimationPlayer__Array>(get_class(), items);
        }
    } // namespace AnimationPlayer
} // namespace app::classes::types
