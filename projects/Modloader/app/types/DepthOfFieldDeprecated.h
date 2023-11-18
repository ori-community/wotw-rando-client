#pragma once
#include <Modloader/app/structs/DepthOfFieldDeprecated.h>
#include <Modloader/app/structs/DepthOfFieldDeprecated__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthOfFieldDeprecated {
        inline app::DepthOfFieldDeprecated__Class** type_info() {
            static app::DepthOfFieldDeprecated__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DepthOfFieldDeprecated__Class**)(modloader::win::memory::resolve_rva(0x0470BB70));
            }
            return cache;
        }
        inline app::DepthOfFieldDeprecated__Class* get_class() {
            return il2cpp::get_class<app::DepthOfFieldDeprecated__Class>(type_info(), "UnityStandardAssets.ImageEffects", "DepthOfFieldDeprecated");
        }
        inline app::DepthOfFieldDeprecated* create() {
            return il2cpp::create_object<app::DepthOfFieldDeprecated>(get_class());
        }
    } // namespace DepthOfFieldDeprecated
} // namespace app::classes::types
