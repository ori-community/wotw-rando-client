#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShootableCreepLogic__Class.h>
#include <Modloader/app/structs/ShootableCreepLogic.h>

namespace app::classes::types {
    namespace ShootableCreepLogic {
        namespace {
            inline app::ShootableCreepLogic__Class* type_info_ref = nullptr;
        }
        inline app::ShootableCreepLogic__Class** type_info = &type_info_ref;
        inline app::ShootableCreepLogic__Class* get_class() {
            return il2cpp::get_class<app::ShootableCreepLogic__Class>(type_info, "", "ShootableCreepLogic");
        }
        inline app::ShootableCreepLogic* create() {
            return il2cpp::create_object<app::ShootableCreepLogic>(get_class());
        }
    } // namespace ShootableCreepLogic
} // namespace app::classes::types
