#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MudkisserDeathReactionBehaviour_c {
        inline app::MudkisserDeathReactionBehaviour_c__Class** type_info = (app::MudkisserDeathReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x047211A0));
        inline app::MudkisserDeathReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MudkisserDeathReactionBehaviour_c__Class>(type_info, "", "MudkisserDeathReactionBehaviour", "<>c");
        }
        inline app::MudkisserDeathReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MudkisserDeathReactionBehaviour_c>(get_class());
        }
    } // namespace MudkisserDeathReactionBehaviour_c
} // namespace app::classes::types
