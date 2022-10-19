#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeConditionalAttribute {
        namespace {
            inline app::NativeConditionalAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeConditionalAttribute__Class** type_info = &type_info_ref;
        inline app::NativeConditionalAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeConditionalAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeConditionalAttribute");
        }
        inline app::NativeConditionalAttribute* create() {
            return il2cpp::create_object<app::NativeConditionalAttribute>(get_class());
        }
    } // namespace NativeConditionalAttribute
} // namespace app::classes::types
