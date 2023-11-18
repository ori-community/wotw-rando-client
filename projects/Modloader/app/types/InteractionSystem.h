#pragma once
#include <Modloader/app/structs/InteractionSystem.h>
#include <Modloader/app/structs/InteractionSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionSystem {
        inline app::InteractionSystem__Class** type_info() {
            static app::InteractionSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionSystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionSystem__Class* get_class() {
            return il2cpp::get_class<app::InteractionSystem__Class>(type_info(), "RootMotion.FinalIK", "InteractionSystem");
        }
        inline app::InteractionSystem* create() {
            return il2cpp::create_object<app::InteractionSystem>(get_class());
        }
    } // namespace InteractionSystem
} // namespace app::classes::types
