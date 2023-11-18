#pragma once
#include <Modloader/app/structs/SeinHealthController.h>
#include <Modloader/app/structs/SeinHealthController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinHealthController {
        inline app::SeinHealthController__Class** type_info() {
            static app::SeinHealthController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinHealthController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinHealthController__Class* get_class() {
            return il2cpp::get_class<app::SeinHealthController__Class>(type_info(), "", "SeinHealthController");
        }
        inline app::SeinHealthController* create() {
            return il2cpp::create_object<app::SeinHealthController>(get_class());
        }
    } // namespace SeinHealthController
} // namespace app::classes::types
