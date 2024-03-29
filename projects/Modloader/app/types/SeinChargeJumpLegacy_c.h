#pragma once
#include <Modloader/app/structs/SeinChargeJumpLegacy_c.h>
#include <Modloader/app/structs/SeinChargeJumpLegacy_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChargeJumpLegacy_c {
        inline app::SeinChargeJumpLegacy_c__Class** type_info() {
            static app::SeinChargeJumpLegacy_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinChargeJumpLegacy_c__Class**)(modloader::win::memory::resolve_rva(0x04701428));
            }
            return cache;
        }
        inline app::SeinChargeJumpLegacy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChargeJumpLegacy_c__Class>(type_info(), "", "SeinChargeJumpLegacy", "<>c");
        }
        inline app::SeinChargeJumpLegacy_c* create() {
            return il2cpp::create_object<app::SeinChargeJumpLegacy_c>(get_class());
        }
    } // namespace SeinChargeJumpLegacy_c
} // namespace app::classes::types
