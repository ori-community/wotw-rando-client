#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetupStateModifierDrawerAttribute {
        namespace {
            app::SetupStateModifierDrawerAttribute__Class* type_info_ref = nullptr;
        }
        app::SetupStateModifierDrawerAttribute__Class** type_info = &type_info_ref;
        inline app::SetupStateModifierDrawerAttribute__Class* get_class() {
            return il2cpp::get_class<app::SetupStateModifierDrawerAttribute__Class>(type_info, "", "SetupStateModifierDrawerAttribute");
        }
        inline app::SetupStateModifierDrawerAttribute* create() {
            return il2cpp::create_object<app::SetupStateModifierDrawerAttribute>(get_class());
        }
    } // namespace SetupStateModifierDrawerAttribute
} // namespace app::classes::types
