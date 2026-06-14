#pragma once
#include <Modloader/app/structs/FireStickInteractor.h>
#include <Modloader/app/structs/FireStickInteractor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FireStickInteractor {
        inline app::FireStickInteractor__Class** type_info() {
            static app::FireStickInteractor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FireStickInteractor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FireStickInteractor__Class* get_class() {
            return il2cpp::get_class<app::FireStickInteractor__Class>(type_info(), "", "FireStickInteractor");
        }
        inline app::FireStickInteractor* create() {
            return il2cpp::create_object<app::FireStickInteractor>(get_class());
        }
    } // namespace FireStickInteractor
} // namespace app::classes::types
