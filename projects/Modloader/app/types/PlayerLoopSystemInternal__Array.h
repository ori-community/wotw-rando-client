#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerLoopSystemInternal__Array__Class.h>
#include <Modloader/app/structs/PlayerLoopSystemInternal__Array.h>

namespace app::classes::types {
    namespace PlayerLoopSystemInternal__Array {
        namespace {
            inline app::PlayerLoopSystemInternal__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayerLoopSystemInternal__Array__Class** type_info = &type_info_ref;
        inline app::PlayerLoopSystemInternal__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoopSystemInternal__Array__Class>(type_info, "UnityEngine.Experimental.LowLevel", "PlayerLoopSystemInternal[]");
        }
        inline app::PlayerLoopSystemInternal__Array* create() {
            return il2cpp::create_object<app::PlayerLoopSystemInternal__Array>(get_class());
        }
    } // namespace PlayerLoopSystemInternal__Array
} // namespace app::classes::types
