#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MudkisserHitReactionBehaviour_c__Class.h>
#include <Modloader/app/structs/MudkisserHitReactionBehaviour_c.h>

namespace app::classes::types {
    namespace MudkisserHitReactionBehaviour_c {
        inline app::MudkisserHitReactionBehaviour_c__Class** type_info = (app::MudkisserHitReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04727DE0));
        inline app::MudkisserHitReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MudkisserHitReactionBehaviour_c__Class>(type_info, "", "MudkisserHitReactionBehaviour", "<>c");
        }
        inline app::MudkisserHitReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MudkisserHitReactionBehaviour_c>(get_class());
        }
    } // namespace MudkisserHitReactionBehaviour_c
} // namespace app::classes::types
