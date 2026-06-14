#pragma once
#include <Modloader/app/structs/PiranhaDeathReactionBehaviour.h>
#include <Modloader/app/structs/PiranhaDeathReactionBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PiranhaDeathReactionBehaviour {
        inline app::PiranhaDeathReactionBehaviour__Class** type_info() {
            static app::PiranhaDeathReactionBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PiranhaDeathReactionBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PiranhaDeathReactionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::PiranhaDeathReactionBehaviour__Class>(type_info(), "", "PiranhaDeathReactionBehaviour");
        }
        inline app::PiranhaDeathReactionBehaviour* create() {
            return il2cpp::create_object<app::PiranhaDeathReactionBehaviour>(get_class());
        }
    } // namespace PiranhaDeathReactionBehaviour
} // namespace app::classes::types
