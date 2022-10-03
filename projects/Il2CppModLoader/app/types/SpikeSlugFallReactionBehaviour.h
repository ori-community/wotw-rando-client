#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpikeSlugFallReactionBehaviour {
        namespace {
            app::SpikeSlugFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        app::SpikeSlugFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SpikeSlugFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugFallReactionBehaviour__Class>(type_info, "", "SpikeSlugFallReactionBehaviour");
        }
        inline app::SpikeSlugFallReactionBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugFallReactionBehaviour>(get_class());
        }
    } // namespace SpikeSlugFallReactionBehaviour
} // namespace app::classes::types
