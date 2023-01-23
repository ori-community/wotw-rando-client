#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnvironmentTintModifier__Class.h>
#include <Modloader/app/structs/EnvironmentTintModifier.h>

namespace app::classes::types {
    namespace EnvironmentTintModifier {
        namespace {
            inline app::EnvironmentTintModifier__Class* type_info_ref = nullptr;
        }
        inline app::EnvironmentTintModifier__Class** type_info = &type_info_ref;
        inline app::EnvironmentTintModifier__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentTintModifier__Class>(type_info, "", "EnvironmentTintModifier");
        }
        inline app::EnvironmentTintModifier* create() {
            return il2cpp::create_object<app::EnvironmentTintModifier>(get_class());
        }
    } // namespace EnvironmentTintModifier
} // namespace app::classes::types
