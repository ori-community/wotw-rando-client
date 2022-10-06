#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLoopSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerLoopSystem__Class** type_info;
        inline app::PlayerLoopSystem__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoopSystem__Class>(type_info, "UnityEngine.Experimental.LowLevel", "PlayerLoopSystem");
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
        inline app::PlayerLoopSystem__Array* create_array(const std::vector<app::PlayerLoopSystem__Boxed>& items) {
            return il2cpp::array_new<app::PlayerLoopSystem__Array>(get_class(), items);
        }
    } // namespace PlayerLoopSystem
} // namespace app::classes::types
