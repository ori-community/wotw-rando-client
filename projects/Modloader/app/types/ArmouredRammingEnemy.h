#pragma once
#include <Modloader/app/structs/ArmouredRammingEnemy.h>
#include <Modloader/app/structs/ArmouredRammingEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArmouredRammingEnemy {
        inline app::ArmouredRammingEnemy__Class** type_info() {
            static app::ArmouredRammingEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArmouredRammingEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArmouredRammingEnemy__Class* get_class() {
            return il2cpp::get_class<app::ArmouredRammingEnemy__Class>(type_info(), "", "ArmouredRammingEnemy");
        }
        inline app::ArmouredRammingEnemy* create() {
            return il2cpp::create_object<app::ArmouredRammingEnemy>(get_class());
        }
    } // namespace ArmouredRammingEnemy
} // namespace app::classes::types
