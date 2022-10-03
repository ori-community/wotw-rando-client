#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeInputSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::NativeInputSystem__Class** type_info;
        inline app::NativeInputSystem__Class* get_class() {
            return il2cpp::get_class<app::NativeInputSystem__Class>(type_info, "UnityEngineInternal.Input", "NativeInputSystem");
        }
        inline app::NativeInputSystem* create() {
            return il2cpp::create_object<app::NativeInputSystem>(get_class());
        }
    } // namespace NativeInputSystem
} // namespace app::classes::types
