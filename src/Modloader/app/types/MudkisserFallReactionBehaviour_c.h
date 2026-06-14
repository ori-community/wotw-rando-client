#pragma once
#include <Modloader/app/structs/MudkisserFallReactionBehaviour_c.h>
#include <Modloader/app/structs/MudkisserFallReactionBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MudkisserFallReactionBehaviour_c {
        inline app::MudkisserFallReactionBehaviour_c__Class** type_info() {
            static app::MudkisserFallReactionBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MudkisserFallReactionBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04775E70));
            }
            return cache;
        }
        inline app::MudkisserFallReactionBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MudkisserFallReactionBehaviour_c__Class>(type_info(), "", "MudkisserFallReactionBehaviour", "<>c");
        }
        inline app::MudkisserFallReactionBehaviour_c* create() {
            return il2cpp::create_object<app::MudkisserFallReactionBehaviour_c>(get_class());
        }
    } // namespace MudkisserFallReactionBehaviour_c
} // namespace app::classes::types
