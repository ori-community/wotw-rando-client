#pragma once
#include <Modloader/app/structs/TitleScreenController.h>
#include <Modloader/app/structs/TitleScreenController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleScreenController {
        inline app::TitleScreenController__Class** type_info() {
            static app::TitleScreenController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleScreenController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleScreenController__Class* get_class() {
            return il2cpp::get_class<app::TitleScreenController__Class>(type_info(), "", "TitleScreenController");
        }
        inline app::TitleScreenController* create() {
            return il2cpp::create_object<app::TitleScreenController>(get_class());
        }
    } // namespace TitleScreenController
} // namespace app::classes::types
