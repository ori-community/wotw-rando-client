#pragma once
#include <Modloader/app/structs/ShootableCreepLogic.h>
#include <Modloader/app/structs/ShootableCreepLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShootableCreepLogic {
        inline app::ShootableCreepLogic__Class** type_info() {
            static app::ShootableCreepLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShootableCreepLogic__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShootableCreepLogic__Class* get_class() {
            return il2cpp::get_class<app::ShootableCreepLogic__Class>(type_info(), "", "ShootableCreepLogic");
        }
        inline app::ShootableCreepLogic* create() {
            return il2cpp::create_object<app::ShootableCreepLogic>(get_class());
        }
    } // namespace ShootableCreepLogic
} // namespace app::classes::types
