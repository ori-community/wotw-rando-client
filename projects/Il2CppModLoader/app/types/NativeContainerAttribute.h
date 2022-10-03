#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeContainerAttribute {
        namespace {
            app::NativeContainerAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeContainerAttribute__Class** type_info = &type_info_ref;
        inline app::NativeContainerAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeContainerAttribute");
        }
        inline app::NativeContainerAttribute* create() {
            return il2cpp::create_object<app::NativeContainerAttribute>(get_class());
        }
    } // namespace NativeContainerAttribute
} // namespace app::classes::types
