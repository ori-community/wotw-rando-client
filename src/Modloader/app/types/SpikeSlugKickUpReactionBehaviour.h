#pragma once
#include <Modloader/app/structs/SpikeSlugKickUpReactionBehaviour.h>
#include <Modloader/app/structs/SpikeSlugKickUpReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugKickUpReactionBehaviour {
        inline app::SpikeSlugKickUpReactionBehaviour__Class** type_info() {
            static app::SpikeSlugKickUpReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpikeSlugKickUpReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpikeSlugKickUpReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugKickUpReactionBehaviour__Class>(type_info(), "", "SpikeSlugKickUpReactionBehaviour");
        }
        inline app::SpikeSlugKickUpReactionBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugKickUpReactionBehaviour>(get_class());
        }
    } // namespace SpikeSlugKickUpReactionBehaviour
} // namespace app::classes::types
