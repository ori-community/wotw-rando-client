#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinChargeJumpLegacy {
        namespace {
            inline app::SeinChargeJumpLegacy__Class* type_info_ref = nullptr;
        }
        inline app::SeinChargeJumpLegacy__Class** type_info = &type_info_ref;
        inline app::SeinChargeJumpLegacy__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeJumpLegacy__Class>(type_info, "", "SeinChargeJumpLegacy");
        }
        inline app::SeinChargeJumpLegacy* create() {
            return il2cpp::create_object<app::SeinChargeJumpLegacy>(get_class());
        }
    } // namespace SeinChargeJumpLegacy
} // namespace app::classes::types
