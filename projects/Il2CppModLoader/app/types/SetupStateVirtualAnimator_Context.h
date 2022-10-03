#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetupStateVirtualAnimator_Context {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetupStateVirtualAnimator_Context__Class** type_info;
        inline app::SetupStateVirtualAnimator_Context__Class* get_class() {
            return il2cpp::get_nested_class<app::SetupStateVirtualAnimator_Context__Class>(type_info, "", "SetupStateVirtualAnimator", "Context");
        }
        inline app::SetupStateVirtualAnimator_Context* create() {
            return il2cpp::create_object<app::SetupStateVirtualAnimator_Context>(get_class());
        }
        inline app::SetupStateVirtualAnimator_Context__Boxed* box(app::SetupStateVirtualAnimator_Context value) {
            return il2cpp::box_value<app::SetupStateVirtualAnimator_Context__Boxed>(get_class(), value);
        }
    } // namespace SetupStateVirtualAnimator_Context
} // namespace app::classes::types
