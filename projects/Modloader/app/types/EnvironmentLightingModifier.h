#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnvironmentLightingModifier__Class.h>
#include <Modloader/app/structs/EnvironmentLightingModifier.h>

namespace app::classes::types {
    namespace EnvironmentLightingModifier {
        inline app::EnvironmentLightingModifier__Class** type_info = (app::EnvironmentLightingModifier__Class**)(modloader::win::memory::resolve_rva(0x0471B678));
        inline app::EnvironmentLightingModifier__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLightingModifier__Class>(type_info, "", "EnvironmentLightingModifier");
        }
        inline app::EnvironmentLightingModifier* create() {
            return il2cpp::create_object<app::EnvironmentLightingModifier>(get_class());
        }
    } // namespace EnvironmentLightingModifier
} // namespace app::classes::types
