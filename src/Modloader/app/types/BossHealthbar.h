#pragma once
#include <Modloader/app/structs/BossHealthbar.h>
#include <Modloader/app/structs/BossHealthbar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BossHealthbar {
        inline app::BossHealthbar__Class** type_info() {
            static app::BossHealthbar__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BossHealthbar__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BossHealthbar__Class* get_class() {
            return il2cpp::get_class<app::BossHealthbar__Class>(type_info(), "", "BossHealthbar");
        }
        inline app::BossHealthbar* create() {
            return il2cpp::create_object<app::BossHealthbar>(get_class());
        }
    } // namespace BossHealthbar
} // namespace app::classes::types
