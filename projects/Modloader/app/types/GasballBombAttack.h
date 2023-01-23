#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GasballBombAttack__Class.h>
#include <Modloader/app/structs/GasballBombAttack.h>

namespace app::classes::types {
    namespace GasballBombAttack {
        namespace {
            inline app::GasballBombAttack__Class* type_info_ref = nullptr;
        }
        inline app::GasballBombAttack__Class** type_info = &type_info_ref;
        inline app::GasballBombAttack__Class* get_class() {
            return il2cpp::get_class<app::GasballBombAttack__Class>(type_info, "", "GasballBombAttack");
        }
        inline app::GasballBombAttack* create() {
            return il2cpp::create_object<app::GasballBombAttack>(get_class());
        }
    } // namespace GasballBombAttack
} // namespace app::classes::types
