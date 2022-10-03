#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinChargeJumpLegacy_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinChargeJumpLegacy_c__Class** type_info;
        inline app::SeinChargeJumpLegacy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinChargeJumpLegacy_c__Class>(type_info, "", "SeinChargeJumpLegacy", "<>c");
        }
        inline app::SeinChargeJumpLegacy_c* create() {
            return il2cpp::create_object<app::SeinChargeJumpLegacy_c>(get_class());
        }
    } // namespace SeinChargeJumpLegacy_c
} // namespace app::classes::types
