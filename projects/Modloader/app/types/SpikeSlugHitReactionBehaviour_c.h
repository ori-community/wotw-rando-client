#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpikeSlugHitReactionBehaviour_c__Class.h>
#include <Modloader/app/structs/SpikeSlugHitReactionBehaviour_c.h>

namespace app::classes::types {
    namespace SpikeSlugHitReactionBehaviour_c {
        inline app::SpikeSlugHitReactionBehaviour_c__Class** type_info = (app::SpikeSlugHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04714E40));
        inline app::SpikeSlugHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpikeSlugHitReactionBehaviour_c__Class>(type_info, "", "SpikeSlugHitReactionBehaviour", "<>c");
        }
        inline app::SpikeSlugHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::SpikeSlugHitReactionBehaviour_c>(get_class());
        }
    } // namespace SpikeSlugHitReactionBehaviour_c
} // namespace app::classes::types
