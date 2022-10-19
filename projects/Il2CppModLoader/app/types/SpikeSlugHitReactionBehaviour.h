#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpikeSlugHitReactionBehaviour {
        namespace {
            inline app::SpikeSlugHitReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpikeSlugHitReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SpikeSlugHitReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugHitReactionBehaviour__Class>(type_info, "", "SpikeSlugHitReactionBehaviour");
        }
        inline app::SpikeSlugHitReactionBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugHitReactionBehaviour>(get_class());
        }
    } // namespace SpikeSlugHitReactionBehaviour
} // namespace app::classes::types
