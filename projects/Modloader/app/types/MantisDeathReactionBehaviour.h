#pragma once
#include <Modloader/app/structs/MantisDeathReactionBehaviour.h>
#include <Modloader/app/structs/MantisDeathReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MantisDeathReactionBehaviour {
        inline app::MantisDeathReactionBehaviour__Class** type_info() {
            static app::MantisDeathReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MantisDeathReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MantisDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MantisDeathReactionBehaviour__Class>(type_info(), "", "MantisDeathReactionBehaviour");
        }
        inline app::MantisDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::MantisDeathReactionBehaviour>(get_class());
        }
    } // namespace MantisDeathReactionBehaviour
} // namespace app::classes::types
