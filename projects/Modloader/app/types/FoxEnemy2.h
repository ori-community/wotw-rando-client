#pragma once
#include <Modloader/app/structs/FoxEnemy2.h>
#include <Modloader/app/structs/FoxEnemy2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FoxEnemy2 {
        inline app::FoxEnemy2__Class** type_info() {
            static app::FoxEnemy2__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FoxEnemy2__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FoxEnemy2__Class* get_class() {
            return il2cpp::get_class<app::FoxEnemy2__Class>(type_info(), "", "FoxEnemy2");
        }
        inline app::FoxEnemy2* create() {
            return il2cpp::create_object<app::FoxEnemy2>(get_class());
        }
    } // namespace FoxEnemy2
} // namespace app::classes::types
