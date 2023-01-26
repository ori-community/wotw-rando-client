#pragma once
#include <Modloader/app/structs/SwarmSuspendWhenOutOfFrustrum.h>
#include <Modloader/app/structs/SwarmSuspendWhenOutOfFrustrum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwarmSuspendWhenOutOfFrustrum {
        inline app::SwarmSuspendWhenOutOfFrustrum__Class** type_info() {
            static app::SwarmSuspendWhenOutOfFrustrum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SwarmSuspendWhenOutOfFrustrum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SwarmSuspendWhenOutOfFrustrum__Class* get_class() {
            return il2cpp::get_class<app::SwarmSuspendWhenOutOfFrustrum__Class>(type_info(), "", "SwarmSuspendWhenOutOfFrustrum");
        }
        inline app::SwarmSuspendWhenOutOfFrustrum* create() {
            return il2cpp::create_object<app::SwarmSuspendWhenOutOfFrustrum>(get_class());
        }
    } // namespace SwarmSuspendWhenOutOfFrustrum
} // namespace app::classes::types
