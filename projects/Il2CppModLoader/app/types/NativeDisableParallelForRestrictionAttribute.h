#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeDisableParallelForRestrictionAttribute {
        namespace {
            app::NativeDisableParallelForRestrictionAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeDisableParallelForRestrictionAttribute__Class** type_info = &type_info_ref;
        inline app::NativeDisableParallelForRestrictionAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeDisableParallelForRestrictionAttribute__Class>(type_info, "Unity.Collections", "NativeDisableParallelForRestrictionAttribute");
        }
        inline app::NativeDisableParallelForRestrictionAttribute* create() {
            return il2cpp::create_object<app::NativeDisableParallelForRestrictionAttribute>(get_class());
        }
    } // namespace NativeDisableParallelForRestrictionAttribute
} // namespace app::classes::types
