#pragma once
#include <Modloader/app/structs/EntityController.h>
#include <Modloader/app/structs/EntityController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityController {
        inline app::EntityController__Class** type_info() {
            static app::EntityController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityController__Class* get_class() {
            return il2cpp::get_class<app::EntityController__Class>(type_info(), "", "EntityController");
        }
        inline app::EntityController* create() {
            return il2cpp::create_object<app::EntityController>(get_class());
        }
    } // namespace EntityController
} // namespace app::classes::types
