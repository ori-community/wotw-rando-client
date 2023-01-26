#pragma once
#include <Modloader/app/structs/SeinEnvironmentForceController.h>
#include <Modloader/app/structs/SeinEnvironmentForceController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinEnvironmentForceController {
        inline app::SeinEnvironmentForceController__Class** type_info() {
            static app::SeinEnvironmentForceController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinEnvironmentForceController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinEnvironmentForceController__Class* get_class() {
            return il2cpp::get_class<app::SeinEnvironmentForceController__Class>(type_info(), "", "SeinEnvironmentForceController");
        }
        inline app::SeinEnvironmentForceController* create() {
            return il2cpp::create_object<app::SeinEnvironmentForceController>(get_class());
        }
    } // namespace SeinEnvironmentForceController
} // namespace app::classes::types
