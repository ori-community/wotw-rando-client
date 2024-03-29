#pragma once
#include <Modloader/app/structs/SpriteAnimatorWithTransitions_c.h>
#include <Modloader/app/structs/SpriteAnimatorWithTransitions_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAnimatorWithTransitions_c {
        inline app::SpriteAnimatorWithTransitions_c__Class** type_info() {
            static app::SpriteAnimatorWithTransitions_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpriteAnimatorWithTransitions_c__Class**)(modloader::win::memory::resolve_rva(0x04752D58));
            }
            return cache;
        }
        inline app::SpriteAnimatorWithTransitions_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpriteAnimatorWithTransitions_c__Class>(type_info(), "", "SpriteAnimatorWithTransitions", "<>c");
        }
        inline app::SpriteAnimatorWithTransitions_c* create() {
            return il2cpp::create_object<app::SpriteAnimatorWithTransitions_c>(get_class());
        }
    } // namespace SpriteAnimatorWithTransitions_c
} // namespace app::classes::types
