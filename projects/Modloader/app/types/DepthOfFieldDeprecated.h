#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DepthOfFieldDeprecated {
        inline app::DepthOfFieldDeprecated__Class** type_info = (app::DepthOfFieldDeprecated__Class**)(modloader::win::memory::resolve_rva(0x0470BB70));
        inline app::DepthOfFieldDeprecated__Class* get_class() {
            return il2cpp::get_class<app::DepthOfFieldDeprecated__Class>(type_info, "UnityStandardAssets.ImageEffects", "DepthOfFieldDeprecated");
        }
        inline app::DepthOfFieldDeprecated* create() {
            return il2cpp::create_object<app::DepthOfFieldDeprecated>(get_class());
        }
    } // namespace DepthOfFieldDeprecated
} // namespace app::classes::types
