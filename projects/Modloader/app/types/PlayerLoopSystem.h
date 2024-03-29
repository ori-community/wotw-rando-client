#pragma once
#include <Modloader/app/structs/PlayerLoopSystem.h>
#include <Modloader/app/structs/PlayerLoopSystem__Array.h>
#include <Modloader/app/structs/PlayerLoopSystem__Boxed.h>
#include <Modloader/app/structs/PlayerLoopSystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerLoopSystem {
        inline app::PlayerLoopSystem__Class** type_info() {
            static app::PlayerLoopSystem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerLoopSystem__Class**)(modloader::win::memory::resolve_rva(0x0470E4A0));
            }
            return cache;
        }
        inline app::PlayerLoopSystem__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoopSystem__Class>(type_info(), "UnityEngine.Experimental.LowLevel", "PlayerLoopSystem");
        }
        inline app::PlayerLoopSystem* create() {
            return il2cpp::create_object<app::PlayerLoopSystem>(get_class());
        }
        inline app::PlayerLoopSystem__Boxed* box(app::PlayerLoopSystem value) {
            return il2cpp::box_value<app::PlayerLoopSystem__Boxed>(get_class(), value);
        }
        inline app::PlayerLoopSystem__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerLoopSystem__Array>(get_class(), size);
        }
        inline app::PlayerLoopSystem__Array* create_array(const std::vector<app::PlayerLoopSystem>& items) {
            return il2cpp::array_new<app::PlayerLoopSystem__Array>(get_class(), items);
        }
    } // namespace PlayerLoopSystem
} // namespace app::classes::types
