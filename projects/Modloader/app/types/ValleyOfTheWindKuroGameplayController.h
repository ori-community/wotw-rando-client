#pragma once
#include <Modloader/app/structs/ValleyOfTheWindKuroGameplayController.h>
#include <Modloader/app/structs/ValleyOfTheWindKuroGameplayController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ValleyOfTheWindKuroGameplayController {
        inline app::ValleyOfTheWindKuroGameplayController__Class** type_info() {
            static app::ValleyOfTheWindKuroGameplayController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ValleyOfTheWindKuroGameplayController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ValleyOfTheWindKuroGameplayController__Class* get_class() {
            return il2cpp::get_class<app::ValleyOfTheWindKuroGameplayController__Class>(type_info(), "", "ValleyOfTheWindKuroGameplayController");
        }
        inline app::ValleyOfTheWindKuroGameplayController* create() {
            return il2cpp::create_object<app::ValleyOfTheWindKuroGameplayController>(get_class());
        }
    } // namespace ValleyOfTheWindKuroGameplayController
} // namespace app::classes::types
