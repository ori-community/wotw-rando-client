#pragma once
#include <Modloader/app/structs/MoonAnimatorDefinition.h>
#include <Modloader/app/structs/MoonAnimatorDefinition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorDefinition {
        inline app::MoonAnimatorDefinition__Class** type_info() {
            static app::MoonAnimatorDefinition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimatorDefinition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimatorDefinition__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorDefinition__Class>(type_info(), "Moon", "MoonAnimatorDefinition");
        }
        inline app::MoonAnimatorDefinition* create() {
            return il2cpp::create_object<app::MoonAnimatorDefinition>(get_class());
        }
    } // namespace MoonAnimatorDefinition
} // namespace app::classes::types
