#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpikeSlugDeathReaction__Class.h>
#include <Modloader/app/structs/SpikeSlugDeathReaction.h>

namespace app::classes::types {
    namespace SpikeSlugDeathReaction {
        namespace {
            inline app::SpikeSlugDeathReaction__Class* type_info_ref = nullptr;
        }
        inline app::SpikeSlugDeathReaction__Class** type_info = &type_info_ref;
        inline app::SpikeSlugDeathReaction__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugDeathReaction__Class>(type_info, "", "SpikeSlugDeathReaction");
        }
        inline app::SpikeSlugDeathReaction* create() {
            return il2cpp::create_object<app::SpikeSlugDeathReaction>(get_class());
        }
    } // namespace SpikeSlugDeathReaction
} // namespace app::classes::types
