#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeTypeAttribute {
        namespace {
            app::NativeTypeAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeTypeAttribute__Class** type_info = &type_info_ref;
        inline app::NativeTypeAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeTypeAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeTypeAttribute");
        }
        inline app::NativeTypeAttribute* create() {
            return il2cpp::create_object<app::NativeTypeAttribute>(get_class());
        }
    } // namespace NativeTypeAttribute
} // namespace app::classes::types
