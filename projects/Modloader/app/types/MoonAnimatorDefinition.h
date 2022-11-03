#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimatorDefinition {
        namespace {
            inline app::MoonAnimatorDefinition__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimatorDefinition__Class** type_info = &type_info_ref;
        inline app::MoonAnimatorDefinition__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorDefinition__Class>(type_info, "Moon", "MoonAnimatorDefinition");
        }
        inline app::MoonAnimatorDefinition* create() {
            return il2cpp::create_object<app::MoonAnimatorDefinition>(get_class());
        }
    } // namespace MoonAnimatorDefinition
} // namespace app::classes::types
