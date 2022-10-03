#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicReflectionDelegateFactory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicReflectionDelegateFactory__Class** type_info;
        inline app::DynamicReflectionDelegateFactory__Class* get_class() {
            return il2cpp::get_class<app::DynamicReflectionDelegateFactory__Class>(type_info, "Newtonsoft.Json.Utilities", "DynamicReflectionDelegateFactory");
        }
        inline app::DynamicReflectionDelegateFactory* create() {
            return il2cpp::create_object<app::DynamicReflectionDelegateFactory>(get_class());
        }
    } // namespace DynamicReflectionDelegateFactory
} // namespace app::classes::types
