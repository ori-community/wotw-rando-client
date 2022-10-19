#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScalableAnimationPlayer {
        inline app::ScalableAnimationPlayer__Class** type_info = (app::ScalableAnimationPlayer__Class**)(modloader::win::memory::resolve_rva(0x04760028));
        inline app::ScalableAnimationPlayer__Class* get_class() {
            return il2cpp::get_class<app::ScalableAnimationPlayer__Class>(type_info, "Moon", "ScalableAnimationPlayer");
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
