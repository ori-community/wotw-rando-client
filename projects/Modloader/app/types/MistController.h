#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MistController__Class.h>
#include <Modloader/app/structs/MistController.h>

namespace app::classes::types {
    namespace MistController {
        namespace {
            inline app::MistController__Class* type_info_ref = nullptr;
        }
        inline app::MistController__Class** type_info = &type_info_ref;
        inline app::MistController__Class* get_class() {
            return il2cpp::get_class<app::MistController__Class>(type_info, "", "MistController");
        }
        inline app::MistController* create() {
            return il2cpp::create_object<app::MistController>(get_class());
        }
    } // namespace MistController
} // namespace app::classes::types
