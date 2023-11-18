#pragma once
#include <Modloader/app/structs/KamikazeSootEnemy.h>
#include <Modloader/app/structs/KamikazeSootEnemy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KamikazeSootEnemy {
        inline app::KamikazeSootEnemy__Class** type_info() {
            static app::KamikazeSootEnemy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KamikazeSootEnemy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KamikazeSootEnemy__Class* get_class() {
            return il2cpp::get_class<app::KamikazeSootEnemy__Class>(type_info(), "", "KamikazeSootEnemy");
        }
        inline app::KamikazeSootEnemy* create() {
            return il2cpp::create_object<app::KamikazeSootEnemy>(get_class());
        }
    } // namespace KamikazeSootEnemy
} // namespace app::classes::types
