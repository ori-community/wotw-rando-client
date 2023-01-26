#pragma once
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour_c.h>
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugHitReactionBehaviour_c {
        inline app::SneezeSlugHitReactionBehaviour_c__Class** type_info() {
            static app::SneezeSlugHitReactionBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SneezeSlugHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x047545A0));
            }
            return cache;
        }
        inline app::SneezeSlugHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SneezeSlugHitReactionBehaviour_c__Class>(type_info(), "", "SneezeSlugHitReactionBehaviour", "<>c");
        }
        inline app::SneezeSlugHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::SneezeSlugHitReactionBehaviour_c>(get_class());
        }
    } // namespace SneezeSlugHitReactionBehaviour_c
} // namespace app::classes::types
