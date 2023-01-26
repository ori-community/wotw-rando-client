#pragma once
#include <Modloader/app/structs/SwarmTargetingBehaviour.h>
#include <Modloader/app/structs/SwarmTargetingBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmTargetingBehaviour {
        inline app::SwarmTargetingBehaviour__Class** type_info() {
            static app::SwarmTargetingBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmTargetingBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmTargetingBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SwarmTargetingBehaviour__Class>(type_info(), "", "SwarmTargetingBehaviour");
        }
        inline app::SwarmTargetingBehaviour* create() {
            return il2cpp::create_object<app::SwarmTargetingBehaviour>(get_class());
        }
    } // namespace SwarmTargetingBehaviour
} // namespace app::classes::types
