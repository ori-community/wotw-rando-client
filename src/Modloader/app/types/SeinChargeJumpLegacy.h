#pragma once
#include <Modloader/app/structs/SeinChargeJumpLegacy.h>
#include <Modloader/app/structs/SeinChargeJumpLegacy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChargeJumpLegacy {
        inline app::SeinChargeJumpLegacy__Class** type_info() {
            static app::SeinChargeJumpLegacy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinChargeJumpLegacy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinChargeJumpLegacy__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeJumpLegacy__Class>(type_info(), "", "SeinChargeJumpLegacy");
        }
        inline app::SeinChargeJumpLegacy* create() {
            return il2cpp::create_object<app::SeinChargeJumpLegacy>(get_class());
        }
    } // namespace SeinChargeJumpLegacy
} // namespace app::classes::types
