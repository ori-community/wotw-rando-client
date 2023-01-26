#pragma once
#include <Modloader/app/structs/WandererInteractionBehaviour.h>
#include <Modloader/app/structs/WandererInteractionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererInteractionBehaviour {
        inline app::WandererInteractionBehaviour__Class** type_info() {
            static app::WandererInteractionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WandererInteractionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WandererInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::WandererInteractionBehaviour__Class>(type_info(), "", "WandererInteractionBehaviour");
        }
        inline app::WandererInteractionBehaviour* create() {
            return il2cpp::create_object<app::WandererInteractionBehaviour>(get_class());
        }
    } // namespace WandererInteractionBehaviour
} // namespace app::classes::types
