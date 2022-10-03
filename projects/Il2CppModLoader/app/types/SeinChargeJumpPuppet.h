#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinChargeJumpPuppet {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinChargeJumpPuppet__Class** type_info;
        inline app::SeinChargeJumpPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeJumpPuppet__Class>(type_info, "", "SeinChargeJumpPuppet");
        }
        inline app::SeinChargeJumpPuppet* create() {
            return il2cpp::create_object<app::SeinChargeJumpPuppet>(get_class());
        }
    } // namespace SeinChargeJumpPuppet
} // namespace app::classes::types
