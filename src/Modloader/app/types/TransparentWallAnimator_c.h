#pragma once
#include <Modloader/app/structs/TransparentWallAnimator_c.h>
#include <Modloader/app/structs/TransparentWallAnimator_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransparentWallAnimator_c {
        inline app::TransparentWallAnimator_c__Class** type_info() {
            static app::TransparentWallAnimator_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TransparentWallAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x0470BDE8));
            }
            return cache;
        }
        inline app::TransparentWallAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TransparentWallAnimator_c__Class>(type_info(), "", "TransparentWallAnimator", "<>c");
        }
        inline app::TransparentWallAnimator_c* create() {
            return il2cpp::create_object<app::TransparentWallAnimator_c>(get_class());
        }
    } // namespace TransparentWallAnimator_c
} // namespace app::classes::types
