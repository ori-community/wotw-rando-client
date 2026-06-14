#pragma once
#include <Modloader/app/structs/ScalableAnimationPlayer.h>
#include <Modloader/app/structs/ScalableAnimationPlayer__Array.h>
#include <Modloader/app/structs/ScalableAnimationPlayer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer {
        inline app::ScalableAnimationPlayer__Class** type_info() {
            static app::ScalableAnimationPlayer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ScalableAnimationPlayer__Class**)(modloader::win::memory::resolve_rva(0x04760028));
            }
            return cache;
        }
        inline app::ScalableAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::ScalableAnimationPlayer__Class>(type_info(), "Moon", "ScalableAnimationPlayer");
        }
        inline app::ScalableAnimationPlayer* create() {
            return il2cpp::create_object<app::ScalableAnimationPlayer>(get_class());
        }
        inline app::ScalableAnimationPlayer__Array* create_array(int size) {
            return il2cpp::array_new<app::ScalableAnimationPlayer__Array>(get_class(), size);
        }
        inline app::ScalableAnimationPlayer__Array* create_array(const std::vector<app::ScalableAnimationPlayer*>& items) {
            return il2cpp::array_new<app::ScalableAnimationPlayer__Array>(get_class(), items);
        }
    } // namespace ScalableAnimationPlayer
} // namespace app::classes::types
