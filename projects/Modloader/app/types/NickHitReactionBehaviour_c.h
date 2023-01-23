#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NickHitReactionBehaviour_c__Class.h>
#include <Modloader/app/structs/NickHitReactionBehaviour_c.h>

namespace app::classes::types {
    namespace NickHitReactionBehaviour_c {
        inline app::NickHitReactionBehaviour_c__Class** type_info = (app::NickHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x047550A8));
        inline app::NickHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::NickHitReactionBehaviour_c__Class>(type_info, "", "NickHitReactionBehaviour", "<>c");
        }
        inline app::NickHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::NickHitReactionBehaviour_c>(get_class());
        }
    } // namespace NickHitReactionBehaviour_c
} // namespace app::classes::types
