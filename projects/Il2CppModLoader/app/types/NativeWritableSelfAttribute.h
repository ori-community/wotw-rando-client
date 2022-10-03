#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeWritableSelfAttribute {
        namespace {
            app::NativeWritableSelfAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeWritableSelfAttribute__Class** type_info = &type_info_ref;
        inline app::NativeWritableSelfAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeWritableSelfAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeWritableSelfAttribute");
        }
        inline app::NativeWritableSelfAttribute* create() {
            return il2cpp::create_object<app::NativeWritableSelfAttribute>(get_class());
        }
    } // namespace NativeWritableSelfAttribute
} // namespace app::classes::types
