#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class.h>
#include <Modloader/app/structs/NativeContainerSupportsMinMaxWriteRestrictionAttribute.h>

namespace app::classes::types {
    namespace NativeContainerSupportsMinMaxWriteRestrictionAttribute {
        namespace {
            inline app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class** type_info = &type_info_ref;
        inline app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeContainerSupportsMinMaxWriteRestrictionAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeContainerSupportsMinMaxWriteRestrictionAttribute");
        }
        inline app::NativeContainerSupportsMinMaxWriteRestrictionAttribute* create() {
            return il2cpp::create_object<app::NativeContainerSupportsMinMaxWriteRestrictionAttribute>(get_class());
        }
    } // namespace NativeContainerSupportsMinMaxWriteRestrictionAttribute
} // namespace app::classes::types
