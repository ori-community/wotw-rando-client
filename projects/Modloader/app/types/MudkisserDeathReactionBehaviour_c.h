#pragma once
#include <Modloader/app/structs/MudkisserDeathReactionBehaviour_c.h>
#include <Modloader/app/structs/MudkisserDeathReactionBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MudkisserDeathReactionBehaviour_c {
        inline app::MudkisserDeathReactionBehaviour_c__Class** type_info() {
            static app::MudkisserDeathReactionBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MudkisserDeathReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x047211A0));
            }
            return cache;
        }
        inline app::MudkisserDeathReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MudkisserDeathReactionBehaviour_c__Class>(type_info(), "", "MudkisserDeathReactionBehaviour", "<>c");
        }
        inline app::MudkisserDeathReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MudkisserDeathReactionBehaviour_c>(get_class());
        }
    } // namespace MudkisserDeathReactionBehaviour_c
} // namespace app::classes::types
