#pragma once
#include <Modloader/app/structs/BossCameraSetup.h>
#include <Modloader/app/structs/BossCameraSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BossCameraSetup {
        inline app::BossCameraSetup__Class** type_info() {
            static app::BossCameraSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BossCameraSetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BossCameraSetup__Class* get_class() {
            return il2cpp::get_class<app::BossCameraSetup__Class>(type_info(), "Moon", "BossCameraSetup");
        }
        inline app::BossCameraSetup* create() {
            return il2cpp::create_object<app::BossCameraSetup>(get_class());
        }
    } // namespace BossCameraSetup
} // namespace app::classes::types
