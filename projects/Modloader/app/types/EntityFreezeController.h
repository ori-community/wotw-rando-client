#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityFreezeController {
        namespace {
            inline app::EntityFreezeController__Class* type_info_ref = nullptr;
        }
        inline app::EntityFreezeController__Class** type_info = &type_info_ref;
        inline app::EntityFreezeController__Class* get_class() {
            return il2cpp::get_class<app::EntityFreezeController__Class>(type_info, "", "EntityFreezeController");
        }
        inline app::EntityFreezeController* create() {
            return il2cpp::create_object<app::EntityFreezeController>(get_class());
        }
    } // namespace EntityFreezeController
} // namespace app::classes::types
