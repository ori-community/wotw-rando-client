#pragma once
#include <Modloader/app/structs/PlayerLoopSystem_UpdateFunction.h>
#include <Modloader/app/structs/PlayerLoopSystem_UpdateFunction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLoopSystem_UpdateFunction {
        inline app::PlayerLoopSystem_UpdateFunction__Class** type_info() {
            static app::PlayerLoopSystem_UpdateFunction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerLoopSystem_UpdateFunction__Class**)(modloader::win::memory::resolve_rva(0x04793850));
            }
            return cache;
        }
        inline app::PlayerLoopSystem_UpdateFunction__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerLoopSystem_UpdateFunction__Class>(type_info(), "UnityEngine.Experimental.LowLevel", "PlayerLoopSystem", "UpdateFunction");
        }
        inline app::PlayerLoopSystem_UpdateFunction* create() {
            return il2cpp::create_object<app::PlayerLoopSystem_UpdateFunction>(get_class());
        }
    } // namespace PlayerLoopSystem_UpdateFunction
} // namespace app::classes::types
