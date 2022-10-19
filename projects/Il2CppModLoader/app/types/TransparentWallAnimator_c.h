#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TransparentWallAnimator_c {
        inline app::TransparentWallAnimator_c__Class** type_info = (app::TransparentWallAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x0470BDE8));
        inline app::TransparentWallAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TransparentWallAnimator_c__Class>(type_info, "", "TransparentWallAnimator", "<>c");
        }
        inline app::TransparentWallAnimator_c* create() {
            return il2cpp::create_object<app::TransparentWallAnimator_c>(get_class());
        }
    } // namespace TransparentWallAnimator_c
} // namespace app::classes::types
