#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceTimer {
        namespace {
            app::RaceTimer__Class* type_info_ref = nullptr;
        }
        app::RaceTimer__Class** type_info = &type_info_ref;
        inline app::RaceTimer__Class* get_class() {
            return il2cpp::get_class<app::RaceTimer__Class>(type_info, "", "RaceTimer");
        }
        inline app::RaceTimer* create() {
            return il2cpp::create_object<app::RaceTimer>(get_class());
        }
    } // namespace RaceTimer
} // namespace app::classes::types
