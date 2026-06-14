#pragma once
#include <Modloader/app/structs/SpikeSlugDeathReaction.h>
#include <Modloader/app/structs/SpikeSlugDeathReaction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugDeathReaction {
        inline app::SpikeSlugDeathReaction__Class** type_info() {
            static app::SpikeSlugDeathReaction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpikeSlugDeathReaction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpikeSlugDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugDeathReaction__Class>(type_info(), "", "SpikeSlugDeathReaction");
        }
        inline app::SpikeSlugDeathReaction* create() {
            return il2cpp::create_object<app::SpikeSlugDeathReaction>(get_class());
        }
    } // namespace SpikeSlugDeathReaction
} // namespace app::classes::types
