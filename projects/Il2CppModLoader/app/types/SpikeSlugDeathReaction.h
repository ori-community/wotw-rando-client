#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
