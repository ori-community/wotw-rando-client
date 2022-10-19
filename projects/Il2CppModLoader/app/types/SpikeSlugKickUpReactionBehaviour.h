#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpikeSlugKickUpReactionBehaviour {
        namespace {
            inline app::SpikeSlugKickUpReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpikeSlugKickUpReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SpikeSlugKickUpReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugKickUpReactionBehaviour__Class>(type_info, "", "SpikeSlugKickUpReactionBehaviour");
        }
        inline app::SpikeSlugKickUpReactionBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugKickUpReactionBehaviour>(get_class());
        }
    } // namespace SpikeSlugKickUpReactionBehaviour
} // namespace app::classes::types
