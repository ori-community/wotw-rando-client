#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GasballBombAttack {
        namespace {
            app::GasballBombAttack__Class* type_info_ref = nullptr;
        }
        app::GasballBombAttack__Class** type_info = &type_info_ref;
        inline app::GasballBombAttack__Class* get_class() {
            return il2cpp::get_class<app::GasballBombAttack__Class>(type_info, "", "GasballBombAttack");
        }
        inline app::GasballBombAttack* create() {
            return il2cpp::create_object<app::GasballBombAttack>(get_class());
        }
    } // namespace GasballBombAttack
} // namespace app::classes::types
