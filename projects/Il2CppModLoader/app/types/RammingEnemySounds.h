#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingEnemySounds {
        namespace {
            app::RammingEnemySounds__Class* type_info_ref = nullptr;
        }
        app::RammingEnemySounds__Class** type_info = &type_info_ref;
        inline app::RammingEnemySounds__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemySounds__Class>(type_info, "", "RammingEnemySounds");
        }
        inline app::RammingEnemySounds* create() {
            return il2cpp::create_object<app::RammingEnemySounds>(get_class());
        }
    } // namespace RammingEnemySounds
} // namespace app::classes::types
