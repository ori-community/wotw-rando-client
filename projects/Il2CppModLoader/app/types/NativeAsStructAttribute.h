#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeAsStructAttribute {
        namespace {
            app::NativeAsStructAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeAsStructAttribute__Class** type_info = &type_info_ref;
        inline app::NativeAsStructAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeAsStructAttribute__Class>(type_info, "UnityEngine.Bindings", "NativeAsStructAttribute");
        }
        inline app::NativeAsStructAttribute* create() {
            return il2cpp::create_object<app::NativeAsStructAttribute>(get_class());
        }
    } // namespace NativeAsStructAttribute
} // namespace app::classes::types
