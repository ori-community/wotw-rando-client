#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColosseumTower {
        namespace {
            app::ColosseumTower__Class* type_info_ref = nullptr;
        }
        app::ColosseumTower__Class** type_info = &type_info_ref;
        inline app::ColosseumTower__Class* get_class() {
            return il2cpp::get_class<app::ColosseumTower__Class>(type_info, "", "ColosseumTower");
        }
        inline app::ColosseumTower* create() {
            return il2cpp::create_object<app::ColosseumTower>(get_class());
        }
    } // namespace ColosseumTower
} // namespace app::classes::types
