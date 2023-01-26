#pragma once
#include <Modloader/app/structs/MinerInteractionBehaviour.h>
#include <Modloader/app/structs/MinerInteractionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerInteractionBehaviour {
        inline app::MinerInteractionBehaviour__Class** type_info() {
            static app::MinerInteractionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerInteractionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerInteractionBehaviour__Class>(type_info(), "", "MinerInteractionBehaviour");
        }
        inline app::MinerInteractionBehaviour* create() {
            return il2cpp::create_object<app::MinerInteractionBehaviour>(get_class());
        }
    } // namespace MinerInteractionBehaviour
} // namespace app::classes::types
