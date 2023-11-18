#pragma once
#include <Modloader/app/structs/MinerDeathReactionBehaviour.h>
#include <Modloader/app/structs/MinerDeathReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerDeathReactionBehaviour {
        inline app::MinerDeathReactionBehaviour__Class** type_info() {
            static app::MinerDeathReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerDeathReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerDeathReactionBehaviour__Class>(type_info(), "", "MinerDeathReactionBehaviour");
        }
        inline app::MinerDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::MinerDeathReactionBehaviour>(get_class());
        }
    } // namespace MinerDeathReactionBehaviour
} // namespace app::classes::types
