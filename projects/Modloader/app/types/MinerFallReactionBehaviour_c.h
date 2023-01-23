#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MinerFallReactionBehaviour_c__Class.h>
#include <Modloader/app/structs/MinerFallReactionBehaviour_c.h>

namespace app::classes::types {
    namespace MinerFallReactionBehaviour_c {
        inline app::MinerFallReactionBehaviour_c__Class** type_info = (app::MinerFallReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04750968));
        inline app::MinerFallReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MinerFallReactionBehaviour_c__Class>(type_info, "", "MinerFallReactionBehaviour", "<>c");
        }
        inline app::MinerFallReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MinerFallReactionBehaviour_c>(get_class());
        }
    } // namespace MinerFallReactionBehaviour_c
} // namespace app::classes::types
