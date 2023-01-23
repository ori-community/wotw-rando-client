#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UpperKickReactionBehaviour_c__Class.h>
#include <Modloader/app/structs/UpperKickReactionBehaviour_c.h>

namespace app::classes::types {
    namespace UpperKickReactionBehaviour_c {
        inline app::UpperKickReactionBehaviour_c__Class** type_info = (app::UpperKickReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04777E50));
        inline app::UpperKickReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UpperKickReactionBehaviour_c__Class>(type_info, "", "UpperKickReactionBehaviour", "<>c");
        }
        inline app::UpperKickReactionBehaviour_c* create() {
            return il2cpp::create_object<app::UpperKickReactionBehaviour_c>(get_class());
        }
    } // namespace UpperKickReactionBehaviour_c
} // namespace app::classes::types
