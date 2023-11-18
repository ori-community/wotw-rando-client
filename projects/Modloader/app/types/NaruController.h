#pragma once
#include <Modloader/app/structs/NaruController.h>
#include <Modloader/app/structs/NaruController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NaruController {
        inline app::NaruController__Class** type_info() {
            static app::NaruController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NaruController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NaruController__Class* get_class() {
            return il2cpp::get_class<app::NaruController__Class>(type_info(), "", "NaruController");
        }
        inline app::NaruController* create() {
            return il2cpp::create_object<app::NaruController>(get_class());
        }
    } // namespace NaruController
} // namespace app::classes::types
