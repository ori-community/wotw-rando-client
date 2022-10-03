#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FreeFunctionAttribute {
        namespace {
            app::FreeFunctionAttribute__Class* type_info_ref = nullptr;
        }
        app::FreeFunctionAttribute__Class** type_info = &type_info_ref;
        inline app::FreeFunctionAttribute__Class* get_class() {
            return il2cpp::get_class<app::FreeFunctionAttribute__Class>(type_info, "UnityEngine.Bindings", "FreeFunctionAttribute");
        }
        inline app::FreeFunctionAttribute* create() {
            return il2cpp::create_object<app::FreeFunctionAttribute>(get_class());
        }
    } // namespace FreeFunctionAttribute
} // namespace app::classes::types
