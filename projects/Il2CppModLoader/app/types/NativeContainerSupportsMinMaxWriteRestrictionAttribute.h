#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeContainerSupportsMinMaxWriteRestrictionAttribute {
        namespace {
            app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class** type_info = &type_info_ref;
        inline app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeContainerSupportsMinMaxWriteRestrictionAttribute");
        }
        inline app::NativeContainerSupportsMinMaxWriteRestrictionAttribute* create() {
            return il2cpp::create_object<app::NativeContainerSupportsMinMaxWriteRestrictionAttribute>(get_class());
        }
    } // namespace NativeContainerSupportsMinMaxWriteRestrictionAttribute
} // namespace app::classes::types
