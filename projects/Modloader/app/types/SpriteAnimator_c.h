#pragma once
#include <Modloader/app/structs/SpriteAnimator_c.h>
#include <Modloader/app/structs/SpriteAnimator_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimator_c {
        inline app::SpriteAnimator_c__Class** type_info() {
            static app::SpriteAnimator_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpriteAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x04755828));
            }
            return cache;
        }
        inline app::SpriteAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpriteAnimator_c__Class>(type_info(), "", "SpriteAnimator", "<>c");
        }
        inline app::SpriteAnimator_c* create() {
            return il2cpp::create_object<app::SpriteAnimator_c>(get_class());
        }
    } // namespace SpriteAnimator_c
} // namespace app::classes::types
