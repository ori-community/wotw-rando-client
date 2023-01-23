#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MantisHitReactionBehaviour_c__Class.h>
#include <Modloader/app/structs/MantisHitReactionBehaviour_c.h>

namespace app::classes::types {
    namespace MantisHitReactionBehaviour_c {
        inline app::MantisHitReactionBehaviour_c__Class** type_info = (app::MantisHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x0471FBF8));
        inline app::MantisHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisHitReactionBehaviour_c__Class>(type_info, "", "MantisHitReactionBehaviour", "<>c");
        }
        inline app::MantisHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MantisHitReactionBehaviour_c>(get_class());
        }
    } // namespace MantisHitReactionBehaviour_c
} // namespace app::classes::types
