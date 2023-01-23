#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeDisableParallelForRestrictionAttribute__Class.h>
#include <Modloader/app/structs/NativeDisableParallelForRestrictionAttribute.h>

namespace app::classes::types {
    namespace NativeDisableParallelForRestrictionAttribute {
        namespace {
            inline app::NativeDisableParallelForRestrictionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::NativeDisableParallelForRestrictionAttribute__Class** type_info = &type_info_ref;
        inline app::NativeDisableParallelForRestrictionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeDisableParallelForRestrictionAttribute__Class>(type_info, "Unity.Collections", "NativeDisableParallelForRestrictionAttribute");
        }
        inline app::NativeDisableParallelForRestrictionAttribute* create() {
            return il2cpp::create_object<app::NativeDisableParallelForRestrictionAttribute>(get_class());
        }
    } // namespace NativeDisableParallelForRestrictionAttribute
} // namespace app::classes::types
