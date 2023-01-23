#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WiggleTreeController__Class.h>
#include <Modloader/app/structs/WiggleTreeController.h>

namespace app::classes::types {
    namespace WiggleTreeController {
        namespace {
            inline app::WiggleTreeController__Class* type_info_ref = nullptr;
        }
        inline app::WiggleTreeController__Class** type_info = &type_info_ref;
        inline app::WiggleTreeController__Class* get_class() {
            return il2cpp::get_class<app::WiggleTreeController__Class>(type_info, "", "WiggleTreeController");
        }
        inline app::WiggleTreeController* create() {
            return il2cpp::create_object<app::WiggleTreeController>(get_class());
        }
    } // namespace WiggleTreeController
} // namespace app::classes::types
