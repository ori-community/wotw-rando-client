#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpriteAnimator_c {
        inline app::SpriteAnimator_c__Class** type_info = (app::SpriteAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x04755828));
        inline app::SpriteAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpriteAnimator_c__Class>(type_info, "", "SpriteAnimator", "<>c");
        }
        inline app::SpriteAnimator_c* create() {
            return il2cpp::create_object<app::SpriteAnimator_c>(get_class());
        }
    } // namespace SpriteAnimator_c
} // namespace app::classes::types
