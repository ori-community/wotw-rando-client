#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LateBoundReflectionDelegateFactory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LateBoundReflectionDelegateFactory__Class** type_info;
        inline app::LateBoundReflectionDelegateFactory__Class* get_class() {
            return il2cpp::get_class<app::LateBoundReflectionDelegateFactory__Class>(type_info, "Newtonsoft.Json.Utilities", "LateBoundReflectionDelegateFactory");
        }
        inline app::LateBoundReflectionDelegateFactory* create() {
            return il2cpp::create_object<app::LateBoundReflectionDelegateFactory>(get_class());
        }
    } // namespace LateBoundReflectionDelegateFactory
} // namespace app::classes::types
