#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BossHealthbar {
        namespace {
            app::BossHealthbar__Class* type_info_ref = nullptr;
        }
        app::BossHealthbar__Class** type_info = &type_info_ref;
        inline app::BossHealthbar__Class* get_class() {
            return il2cpp::get_class<app::BossHealthbar__Class>(type_info, "", "BossHealthbar");
        }
        inline app::BossHealthbar* create() {
            return il2cpp::create_object<app::BossHealthbar>(get_class());
        }
    } // namespace BossHealthbar
} // namespace app::classes::types
