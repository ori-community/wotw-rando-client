#pragma once
#include <Modloader/app/structs/BossCameraTarget.h>
#include <Modloader/app/structs/BossCameraTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BossCameraTarget {
        inline app::BossCameraTarget__Class** type_info() {
            static app::BossCameraTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BossCameraTarget__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BossCameraTarget__Class* get_class() {
            return il2cpp::get_class<app::BossCameraTarget__Class>(type_info(), "", "BossCameraTarget");
        }
        inline app::BossCameraTarget* create() {
            return il2cpp::create_object<app::BossCameraTarget>(get_class());
        }
    } // namespace BossCameraTarget
} // namespace app::classes::types
