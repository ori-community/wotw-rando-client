#pragma once
#include <Modloader/app/structs/PlayerLoopSystem__Array.h>
#include <Modloader/app/structs/PlayerLoopSystem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLoopSystem__Array {
        inline app::PlayerLoopSystem__Array__Class** type_info() {
            static app::PlayerLoopSystem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayerLoopSystem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayerLoopSystem__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoopSystem__Array__Class>(type_info(), "UnityEngine.Experimental.LowLevel", "PlayerLoopSystem[]");
        }
        inline app::PlayerLoopSystem__Array* create() {
            return il2cpp::create_object<app::PlayerLoopSystem__Array>(get_class());
        }
    } // namespace PlayerLoopSystem__Array
} // namespace app::classes::types
