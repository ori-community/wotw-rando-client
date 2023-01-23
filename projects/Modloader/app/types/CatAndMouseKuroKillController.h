#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CatAndMouseKuroKillController__Class.h>
#include <Modloader/app/structs/CatAndMouseKuroKillController.h>

namespace app::classes::types {
    namespace CatAndMouseKuroKillController {
        namespace {
            inline app::CatAndMouseKuroKillController__Class* type_info_ref = nullptr;
        }
        inline app::CatAndMouseKuroKillController__Class** type_info = &type_info_ref;
        inline app::CatAndMouseKuroKillController__Class* get_class() {
            return il2cpp::get_class<app::CatAndMouseKuroKillController__Class>(type_info, "", "CatAndMouseKuroKillController");
        }
        inline app::CatAndMouseKuroKillController* create() {
            return il2cpp::create_object<app::CatAndMouseKuroKillController>(get_class());
        }
    } // namespace CatAndMouseKuroKillController
} // namespace app::classes::types
