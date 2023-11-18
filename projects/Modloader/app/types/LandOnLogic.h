#pragma once
#include <Modloader/app/structs/LandOnLogic.h>
#include <Modloader/app/structs/LandOnLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LandOnLogic {
        inline app::LandOnLogic__Class** type_info() {
            static app::LandOnLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LandOnLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LandOnLogic__Class* get_class() {
            return il2cpp::get_class<app::LandOnLogic__Class>(type_info(), "", "LandOnLogic");
        }
        inline app::LandOnLogic* create() {
            return il2cpp::create_object<app::LandOnLogic>(get_class());
        }
    } // namespace LandOnLogic
} // namespace app::classes::types
