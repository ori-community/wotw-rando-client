#pragma once
#include <Modloader/app/structs/NativeDisableParallelForRestrictionAttribute.h>
#include <Modloader/app/structs/NativeDisableParallelForRestrictionAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeDisableParallelForRestrictionAttribute {
        inline app::NativeDisableParallelForRestrictionAttribute__Class** type_info() {
            static app::NativeDisableParallelForRestrictionAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NativeDisableParallelForRestrictionAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NativeDisableParallelForRestrictionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeDisableParallelForRestrictionAttribute__Class>(type_info(), "Unity.Collections", "NativeDisableParallelForRestrictionAttribute");
        }
        inline app::NativeDisableParallelForRestrictionAttribute* create() {
            return il2cpp::create_object<app::NativeDisableParallelForRestrictionAttribute>(get_class());
        }
    } // namespace NativeDisableParallelForRestrictionAttribute
} // namespace app::classes::types
