#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KuController__Class.h>
#include <Modloader/app/structs/KuController.h>

namespace app::classes::types {
    namespace KuController {
        namespace {
            inline app::KuController__Class* type_info_ref = nullptr;
        }
        inline app::KuController__Class** type_info = &type_info_ref;
        inline app::KuController__Class* get_class() {
            return il2cpp::get_class<app::KuController__Class>(type_info, "", "KuController");
        }
        inline app::KuController* create() {
            return il2cpp::create_object<app::KuController>(get_class());
        }
    } // namespace KuController
} // namespace app::classes::types
