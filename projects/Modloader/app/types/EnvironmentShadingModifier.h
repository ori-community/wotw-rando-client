#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnvironmentShadingModifier__Class.h>
#include <Modloader/app/structs/EnvironmentShadingModifier.h>

namespace app::classes::types {
    namespace EnvironmentShadingModifier {
        namespace {
            inline app::EnvironmentShadingModifier__Class* type_info_ref = nullptr;
        }
        inline app::EnvironmentShadingModifier__Class** type_info = &type_info_ref;
        inline app::EnvironmentShadingModifier__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentShadingModifier__Class>(type_info, "", "EnvironmentShadingModifier");
        }
        inline app::EnvironmentShadingModifier* create() {
            return il2cpp::create_object<app::EnvironmentShadingModifier>(get_class());
        }
    } // namespace EnvironmentShadingModifier
} // namespace app::classes::types
