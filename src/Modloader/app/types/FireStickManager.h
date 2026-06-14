#pragma once
#include <Modloader/app/structs/FireStickManager.h>
#include <Modloader/app/structs/FireStickManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FireStickManager {
        inline app::FireStickManager__Class** type_info() {
            static app::FireStickManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FireStickManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FireStickManager__Class* get_class() {
            return il2cpp::get_class<app::FireStickManager__Class>(type_info(), "", "FireStickManager");
        }
        inline app::FireStickManager* create() {
            return il2cpp::create_object<app::FireStickManager>(get_class());
        }
    } // namespace FireStickManager
} // namespace app::classes::types
