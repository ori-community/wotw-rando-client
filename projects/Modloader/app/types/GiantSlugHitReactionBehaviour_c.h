#pragma once
#include <Modloader/app/structs/GiantSlugHitReactionBehaviour_c.h>
#include <Modloader/app/structs/GiantSlugHitReactionBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GiantSlugHitReactionBehaviour_c {
        inline app::GiantSlugHitReactionBehaviour_c__Class** type_info() {
            static app::GiantSlugHitReactionBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GiantSlugHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04782598));
            }
            return cache;
        }
        inline app::GiantSlugHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GiantSlugHitReactionBehaviour_c__Class>(type_info(), "", "GiantSlugHitReactionBehaviour", "<>c");
        }
        inline app::GiantSlugHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::GiantSlugHitReactionBehaviour_c>(get_class());
        }
    } // namespace GiantSlugHitReactionBehaviour_c
} // namespace app::classes::types
