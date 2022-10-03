#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeMethodAttribute {
        namespace {
            app::NativeMethodAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeMethodAttribute__Class** type_info = &type_info_ref;
        inline app::NativeMethodAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeMethodAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeMethodAttribute");
        }
        inline app::NativeMethodAttribute* create() {
            return il2cpp::create_object<app::NativeMethodAttribute>(get_class());
        }
    } // namespace NativeMethodAttribute
} // namespace app::classes::types
