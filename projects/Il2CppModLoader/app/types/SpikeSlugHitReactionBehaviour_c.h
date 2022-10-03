#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugHitReactionBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpikeSlugHitReactionBehaviour_c__Class** type_info;
        inline app::SpikeSlugHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpikeSlugHitReactionBehaviour_c__Class>(type_info, "", "SpikeSlugHitReactionBehaviour", "<>c");
        }
        inline app::SpikeSlugHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::SpikeSlugHitReactionBehaviour_c>(get_class());
        }
    } // namespace SpikeSlugHitReactionBehaviour_c
} // namespace app::classes::types
