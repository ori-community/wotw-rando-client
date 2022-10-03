#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorDefinition {
        namespace {
            app::MoonAnimatorDefinition__Class* type_info_ref = nullptr;
        }
        app::MoonAnimatorDefinition__Class** type_info = &type_info_ref;
        inline app::MoonAnimatorDefinition__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorDefinition__Class>(type_info, "Moon", "MoonAnimatorDefinition");
        }
        inline app::MoonAnimatorDefinition* create() {
            return il2cpp::create_object<app::MoonAnimatorDefinition>(get_class());
        }
    } // namespace MoonAnimatorDefinition
} // namespace app::classes::types
