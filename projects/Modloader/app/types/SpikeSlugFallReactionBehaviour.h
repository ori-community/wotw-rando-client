#pragma once
#include <Modloader/app/structs/SpikeSlugFallReactionBehaviour.h>
#include <Modloader/app/structs/SpikeSlugFallReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugFallReactionBehaviour {
        inline app::SpikeSlugFallReactionBehaviour__Class** type_info() {
            static app::SpikeSlugFallReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpikeSlugFallReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpikeSlugFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugFallReactionBehaviour__Class>(type_info(), "", "SpikeSlugFallReactionBehaviour");
        }
        inline app::SpikeSlugFallReactionBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugFallReactionBehaviour>(get_class());
        }
    } // namespace SpikeSlugFallReactionBehaviour
} // namespace app::classes::types
