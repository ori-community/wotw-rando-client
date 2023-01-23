#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MinerThrowAttack__Class.h>
#include <Modloader/app/structs/MinerThrowAttack.h>

namespace app::classes::types {
    namespace MinerThrowAttack {
        namespace {
            inline app::MinerThrowAttack__Class* type_info_ref = nullptr;
        }
        inline app::MinerThrowAttack__Class** type_info = &type_info_ref;
        inline app::MinerThrowAttack__Class* get_class() {
            return il2cpp::get_class<app::MinerThrowAttack__Class>(type_info, "", "MinerThrowAttack");
        }
        inline app::MinerThrowAttack* create() {
            return il2cpp::create_object<app::MinerThrowAttack>(get_class());
        }
    } // namespace MinerThrowAttack
} // namespace app::classes::types
