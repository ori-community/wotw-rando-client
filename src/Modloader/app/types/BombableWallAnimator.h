#pragma once
#include <Modloader/app/structs/BombableWallAnimator.h>
#include <Modloader/app/structs/BombableWallAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BombableWallAnimator {
        inline app::BombableWallAnimator__Class** type_info() {
            static app::BombableWallAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BombableWallAnimator__Class**)(modloader::win::memory::resolve_rva(0x04722448));
            }
            return cache;
        }
        inline app::BombableWallAnimator__Class* get_class() {
            return il2cpp::get_class<app::BombableWallAnimator__Class>(type_info(), "", "BombableWallAnimator");
        }
        inline app::BombableWallAnimator* create() {
            return il2cpp::create_object<app::BombableWallAnimator>(get_class());
        }
    } // namespace BombableWallAnimator
} // namespace app::classes::types
