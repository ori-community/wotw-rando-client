#pragma once
#include <Modloader/app/structs/PlayerLoopSystemInternal__Array.h>
#include <Modloader/app/structs/PlayerLoopSystemInternal__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLoopSystemInternal__Array {
        inline app::PlayerLoopSystemInternal__Array__Class** type_info() {
            static app::PlayerLoopSystemInternal__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerLoopSystemInternal__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerLoopSystemInternal__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoopSystemInternal__Array__Class>(type_info(), "UnityEngine.Experimental.LowLevel", "PlayerLoopSystemInternal[]");
        }
        inline app::PlayerLoopSystemInternal__Array* create() {
            return il2cpp::create_object<app::PlayerLoopSystemInternal__Array>(get_class());
        }
    } // namespace PlayerLoopSystemInternal__Array
} // namespace app::classes::types
