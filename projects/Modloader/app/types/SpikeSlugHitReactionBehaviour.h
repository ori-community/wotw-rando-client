#pragma once
#include <Modloader/app/structs/SpikeSlugHitReactionBehaviour.h>
#include <Modloader/app/structs/SpikeSlugHitReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugHitReactionBehaviour {
        inline app::SpikeSlugHitReactionBehaviour__Class** type_info() {
            static app::SpikeSlugHitReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpikeSlugHitReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpikeSlugHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugHitReactionBehaviour__Class>(type_info(), "", "SpikeSlugHitReactionBehaviour");
        }
        inline app::SpikeSlugHitReactionBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugHitReactionBehaviour>(get_class());
        }
    } // namespace SpikeSlugHitReactionBehaviour
} // namespace app::classes::types
