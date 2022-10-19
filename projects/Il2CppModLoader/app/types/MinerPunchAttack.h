#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerPunchAttack {
        namespace {
            inline app::MinerPunchAttack__Class* type_info_ref = nullptr;
        }
        inline app::MinerPunchAttack__Class** type_info = &type_info_ref;
        inline app::MinerPunchAttack__Class* get_class() {
            return il2cpp::get_class<app::MinerPunchAttack__Class>(type_info, "", "MinerPunchAttack");
        }
        inline app::MinerPunchAttack* create() {
            return il2cpp::create_object<app::MinerPunchAttack>(get_class());
        }
    } // namespace MinerPunchAttack
} // namespace app::classes::types
