#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeDisableContainerSafetyRestrictionAttribute {
        namespace {
            inline app::NativeDisableContainerSafetyRestrictionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeDisableContainerSafetyRestrictionAttribute__Class** type_info = &type_info_ref;
        inline app::NativeDisableContainerSafetyRestrictionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeDisableContainerSafetyRestrictionAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeDisableContainerSafetyRestrictionAttribute");
        }
        inline app::NativeDisableContainerSafetyRestrictionAttribute* create() {
            return il2cpp::create_object<app::NativeDisableContainerSafetyRestrictionAttribute>(get_class());
        }
    } // namespace NativeDisableContainerSafetyRestrictionAttribute
} // namespace app::classes::types
