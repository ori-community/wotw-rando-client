#pragma once
#include <Modloader/app/structs/RotationTrackingChain.h>
#include <Modloader/app/structs/RotationTrackingChain__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RotationTrackingChain {
        inline app::RotationTrackingChain__Class** type_info() {
            static app::RotationTrackingChain__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RotationTrackingChain__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RotationTrackingChain__Class* get_class() {
            return il2cpp::get_class<app::RotationTrackingChain__Class>(type_info(), "", "RotationTrackingChain");
        }
        inline app::RotationTrackingChain* create() {
            return il2cpp::create_object<app::RotationTrackingChain>(get_class());
        }
    } // namespace RotationTrackingChain
} // namespace app::classes::types
