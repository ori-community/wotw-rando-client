#pragma once
#include <Modloader/app/structs/WandererNPC_InteractionLine__Array.h>
#include <Modloader/app/structs/WandererNPC_InteractionLine__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererNPC_InteractionLine__Array {
        inline app::WandererNPC_InteractionLine__Array__Class** type_info() {
            static app::WandererNPC_InteractionLine__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererNPC_InteractionLine__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererNPC_InteractionLine__Array__Class* get_class() {
            return il2cpp::get_class<app::WandererNPC_InteractionLine__Array__Class>(type_info(), "", "WandererNPC+InteractionLine[]");
        }
        inline app::WandererNPC_InteractionLine__Array* create() {
            return il2cpp::create_object<app::WandererNPC_InteractionLine__Array>(get_class());
        }
    } // namespace WandererNPC_InteractionLine__Array
} // namespace app::classes::types
