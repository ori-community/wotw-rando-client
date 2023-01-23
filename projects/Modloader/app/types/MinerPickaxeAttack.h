#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MinerPickaxeAttack__Class.h>
#include <Modloader/app/structs/MinerPickaxeAttack.h>

namespace app::classes::types {
    namespace MinerPickaxeAttack {
        namespace {
            inline app::MinerPickaxeAttack__Class* type_info_ref = nullptr;
        }
        inline app::MinerPickaxeAttack__Class** type_info = &type_info_ref;
        inline app::MinerPickaxeAttack__Class* get_class() {
            return il2cpp::get_class<app::MinerPickaxeAttack__Class>(type_info, "", "MinerPickaxeAttack");
        }
        inline app::MinerPickaxeAttack* create() {
            return il2cpp::create_object<app::MinerPickaxeAttack>(get_class());
        }
    } // namespace MinerPickaxeAttack
} // namespace app::classes::types
