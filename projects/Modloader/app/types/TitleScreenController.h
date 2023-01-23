#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TitleScreenController__Class.h>
#include <Modloader/app/structs/TitleScreenController.h>

namespace app::classes::types {
    namespace TitleScreenController {
        namespace {
            inline app::TitleScreenController__Class* type_info_ref = nullptr;
        }
        inline app::TitleScreenController__Class** type_info = &type_info_ref;
        inline app::TitleScreenController__Class* get_class() {
            return il2cpp::get_class<app::TitleScreenController__Class>(type_info, "", "TitleScreenController");
        }
        inline app::TitleScreenController* create() {
            return il2cpp::create_object<app::TitleScreenController>(get_class());
        }
    } // namespace TitleScreenController
} // namespace app::classes::types
