#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeDisableUnsafePtrRestrictionAttribute__Class.h>
#include <Modloader/app/structs/NativeDisableUnsafePtrRestrictionAttribute.h>

namespace app::classes::types {
    namespace NativeDisableUnsafePtrRestrictionAttribute {
        namespace {
            inline app::NativeDisableUnsafePtrRestrictionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeDisableUnsafePtrRestrictionAttribute__Class** type_info = &type_info_ref;
        inline app::NativeDisableUnsafePtrRestrictionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeDisableUnsafePtrRestrictionAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeDisableUnsafePtrRestrictionAttribute");
        }
        inline app::NativeDisableUnsafePtrRestrictionAttribute* create() {
            return il2cpp::create_object<app::NativeDisableUnsafePtrRestrictionAttribute>(get_class());
        }
    } // namespace NativeDisableUnsafePtrRestrictionAttribute
} // namespace app::classes::types
