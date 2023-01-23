#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayerLoopSystem__Array__Class.h>
#include <Modloader/app/structs/PlayerLoopSystem__Array.h>

namespace app::classes::types {
    namespace PlayerLoopSystem__Array {
        namespace {
            inline app::PlayerLoopSystem__Array__Class* type_info_ref = nullptr;
        }
        inline app::PlayerLoopSystem__Array__Class** type_info = &type_info_ref;
        inline app::PlayerLoopSystem__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoopSystem__Array__Class>(type_info, "UnityEngine.Experimental.LowLevel", "PlayerLoopSystem[]");
        }
        inline app::PlayerLoopSystem__Array* create() {
            return il2cpp::create_object<app::PlayerLoopSystem__Array>(get_class());
        }
    } // namespace PlayerLoopSystem__Array
} // namespace app::classes::types
