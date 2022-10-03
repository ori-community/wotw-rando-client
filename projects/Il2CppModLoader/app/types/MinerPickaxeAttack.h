#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerPickaxeAttack {
        namespace {
            app::MinerPickaxeAttack__Class* type_info_ref = nullptr;
        }
        app::MinerPickaxeAttack__Class** type_info = &type_info_ref;
        inline app::MinerPickaxeAttack__Class* get_class() {
            return il2cpp::get_class<app::MinerPickaxeAttack__Class>(type_info, "", "MinerPickaxeAttack");
        }
        inline app::MinerPickaxeAttack* create() {
            return il2cpp::create_object<app::MinerPickaxeAttack>(get_class());
        }
    } // namespace MinerPickaxeAttack
} // namespace app::classes::types
