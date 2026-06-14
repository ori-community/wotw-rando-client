#pragma once
#include <Modloader/app/structs/FrogDeathReactionBehaviour.h>
#include <Modloader/app/structs/FrogDeathReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FrogDeathReactionBehaviour {
        inline app::FrogDeathReactionBehaviour__Class** type_info() {
            static app::FrogDeathReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FrogDeathReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FrogDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::FrogDeathReactionBehaviour__Class>(type_info(), "", "FrogDeathReactionBehaviour");
        }
        inline app::FrogDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::FrogDeathReactionBehaviour>(get_class());
        }
    } // namespace FrogDeathReactionBehaviour
} // namespace app::classes::types
