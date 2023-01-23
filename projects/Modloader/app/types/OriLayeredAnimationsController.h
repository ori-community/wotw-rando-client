#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OriLayeredAnimationsController__Class.h>
#include <Modloader/app/structs/OriLayeredAnimationsController.h>

namespace app::classes::types {
    namespace OriLayeredAnimationsController {
        namespace {
            inline app::OriLayeredAnimationsController__Class* type_info_ref = nullptr;
        }
        inline app::OriLayeredAnimationsController__Class** type_info = &type_info_ref;
        inline app::OriLayeredAnimationsController__Class* get_class() {
            return il2cpp::get_class<app::OriLayeredAnimationsController__Class>(type_info, "", "OriLayeredAnimationsController");
        }
        inline app::OriLayeredAnimationsController* create() {
            return il2cpp::create_object<app::OriLayeredAnimationsController>(get_class());
        }
    } // namespace OriLayeredAnimationsController
} // namespace app::classes::types
