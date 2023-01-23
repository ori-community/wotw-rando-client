#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrabHitReactionBehaviour_c__Class.h>
#include <Modloader/app/structs/CrabHitReactionBehaviour_c.h>

namespace app::classes::types {
    namespace CrabHitReactionBehaviour_c {
        inline app::CrabHitReactionBehaviour_c__Class** type_info = (app::CrabHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04747D58));
        inline app::CrabHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CrabHitReactionBehaviour_c__Class>(type_info, "", "CrabHitReactionBehaviour", "<>c");
        }
        inline app::CrabHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::CrabHitReactionBehaviour_c>(get_class());
        }
    } // namespace CrabHitReactionBehaviour_c
} // namespace app::classes::types
