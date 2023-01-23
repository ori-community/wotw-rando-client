#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BerryTreeController__Class.h>
#include <Modloader/app/structs/BerryTreeController.h>

namespace app::classes::types {
    namespace BerryTreeController {
        namespace {
            inline app::BerryTreeController__Class* type_info_ref = nullptr;
        }
        inline app::BerryTreeController__Class** type_info = &type_info_ref;
        inline app::BerryTreeController__Class* get_class() {
            return il2cpp::get_class<app::BerryTreeController__Class>(type_info, "", "BerryTreeController");
        }
        inline app::BerryTreeController* create() {
            return il2cpp::create_object<app::BerryTreeController>(get_class());
        }
    } // namespace BerryTreeController
} // namespace app::classes::types
