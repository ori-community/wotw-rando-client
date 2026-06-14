#pragma once
#include <Modloader/app/structs/EntityFreezeController.h>
#include <Modloader/app/structs/EntityFreezeController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityFreezeController {
        inline app::EntityFreezeController__Class** type_info() {
            static app::EntityFreezeController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityFreezeController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityFreezeController__Class* get_class() {
            return il2cpp::get_class<app::EntityFreezeController__Class>(type_info(), "", "EntityFreezeController");
        }
        inline app::EntityFreezeController* create() {
            return il2cpp::create_object<app::EntityFreezeController>(get_class());
        }
    } // namespace EntityFreezeController
} // namespace app::classes::types
