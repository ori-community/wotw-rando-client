#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SlugController__Class.h>
#include <Modloader/app/structs/SlugController.h>

namespace app::classes::types {
    namespace SlugController {
        namespace {
            inline app::SlugController__Class* type_info_ref = nullptr;
        }
        inline app::SlugController__Class** type_info = &type_info_ref;
        inline app::SlugController__Class* get_class() {
            return il2cpp::get_class<app::SlugController__Class>(type_info, "", "SlugController");
        }
        inline app::SlugController* create() {
            return il2cpp::create_object<app::SlugController>(get_class());
        }
    } // namespace SlugController
} // namespace app::classes::types
