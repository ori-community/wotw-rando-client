#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLoopSystemInternal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerLoopSystemInternal__Class** type_info;
        inline app::PlayerLoopSystemInternal__Class* get_class() {
            return il2cpp::get_class<app::PlayerLoopSystemInternal__Class>(type_info, "UnityEngine.Experimental.LowLevel", "PlayerLoopSystemInternal");
        }
        inline app::PlayerLoopSystemInternal* create() {
            return il2cpp::create_object<app::PlayerLoopSystemInternal>(get_class());
        }
        inline app::PlayerLoopSystemInternal__Boxed* box(app::PlayerLoopSystemInternal value) {
            return il2cpp::box_value<app::PlayerLoopSystemInternal__Boxed>(get_class(), value);
        }
        inline app::PlayerLoopSystemInternal__Array* create_array(int size) {
            return il2cpp::array_new<app::PlayerLoopSystemInternal__Array>(get_class(), size);
        }
    } // namespace PlayerLoopSystemInternal
} // namespace app::classes::types
