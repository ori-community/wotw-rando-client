#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ValleyOfTheWindKuroGameplayController__Class.h>
#include <Modloader/app/structs/ValleyOfTheWindKuroGameplayController.h>

namespace app::classes::types {
    namespace ValleyOfTheWindKuroGameplayController {
        namespace {
            inline app::ValleyOfTheWindKuroGameplayController__Class* type_info_ref = nullptr;
        }
        inline app::ValleyOfTheWindKuroGameplayController__Class** type_info = &type_info_ref;
        inline app::ValleyOfTheWindKuroGameplayController__Class* get_class() {
            return il2cpp::get_class<app::ValleyOfTheWindKuroGameplayController__Class>(type_info, "", "ValleyOfTheWindKuroGameplayController");
        }
        inline app::ValleyOfTheWindKuroGameplayController* create() {
            return il2cpp::create_object<app::ValleyOfTheWindKuroGameplayController>(get_class());
        }
    } // namespace ValleyOfTheWindKuroGameplayController
} // namespace app::classes::types
