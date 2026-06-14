#pragma once
#include <Modloader/app/structs/SpikeSlugDeathReaction_c.h>
#include <Modloader/app/structs/SpikeSlugDeathReaction_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugDeathReaction_c {
        inline app::SpikeSlugDeathReaction_c__Class** type_info() {
            static app::SpikeSlugDeathReaction_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpikeSlugDeathReaction_c__Class**)(modloader::win::memory::resolve_rva(0x04741D98));
            }
            return cache;
        }
        inline app::SpikeSlugDeathReaction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpikeSlugDeathReaction_c__Class>(type_info(), "", "SpikeSlugDeathReaction", "<>c");
        }
        inline app::SpikeSlugDeathReaction_c* create() {
            return il2cpp::create_object<app::SpikeSlugDeathReaction_c>(get_class());
        }
    } // namespace SpikeSlugDeathReaction_c
} // namespace app::classes::types
