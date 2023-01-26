#pragma once
#include <Modloader/app/structs/WormHoleManager.h>
#include <Modloader/app/structs/WormHoleManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WormHoleManager {
        inline app::WormHoleManager__Class** type_info() {
            static app::WormHoleManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WormHoleManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WormHoleManager__Class* get_class() {
            return il2cpp::get_class<app::WormHoleManager__Class>(type_info(), "", "WormHoleManager");
        }
        inline app::WormHoleManager* create() {
            return il2cpp::create_object<app::WormHoleManager>(get_class());
        }
    } // namespace WormHoleManager
} // namespace app::classes::types
