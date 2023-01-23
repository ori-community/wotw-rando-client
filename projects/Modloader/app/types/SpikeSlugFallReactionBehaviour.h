#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpikeSlugFallReactionBehaviour__Class.h>
#include <Modloader/app/structs/SpikeSlugFallReactionBehaviour.h>

namespace app::classes::types {
    namespace SpikeSlugFallReactionBehaviour {
        namespace {
            inline app::SpikeSlugFallReactionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SpikeSlugFallReactionBehaviour__Class** type_info = &type_info_ref;
        inline app::SpikeSlugFallReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SpikeSlugFallReactionBehaviour__Class>(type_info, "", "SpikeSlugFallReactionBehaviour");
        }
        inline app::SpikeSlugFallReactionBehaviour* create() {
            return il2cpp::create_object<app::SpikeSlugFallReactionBehaviour>(get_class());
        }
    } // namespace SpikeSlugFallReactionBehaviour
} // namespace app::classes::types
