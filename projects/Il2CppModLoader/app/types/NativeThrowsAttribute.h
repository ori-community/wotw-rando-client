#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeThrowsAttribute {
        namespace {
            app::NativeThrowsAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeThrowsAttribute__Class** type_info = &type_info_ref;
        inline app::NativeThrowsAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeThrowsAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeThrowsAttribute");
        }
        inline app::NativeThrowsAttribute* create() {
            return il2cpp::create_object<app::NativeThrowsAttribute>(get_class());
        }
    } // namespace NativeThrowsAttribute
} // namespace app::classes::types
