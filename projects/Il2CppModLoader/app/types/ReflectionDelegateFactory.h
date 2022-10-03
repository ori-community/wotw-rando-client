#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionDelegateFactory {
        namespace {
            app::ReflectionDelegateFactory__Class* type_info_ref = nullptr;
        }
        app::ReflectionDelegateFactory__Class** type_info = &type_info_ref;
        inline app::ReflectionDelegateFactory__Class* get_class() {
            return il2cpp::get_class<app::ReflectionDelegateFactory__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionDelegateFactory");
        }
        inline app::ReflectionDelegateFactory* create() {
            return il2cpp::create_object<app::ReflectionDelegateFactory>(get_class());
        }
    } // namespace ReflectionDelegateFactory
} // namespace app::classes::types
