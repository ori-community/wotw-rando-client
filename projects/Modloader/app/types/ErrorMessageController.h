#pragma once
#include <Modloader/app/structs/ErrorMessageController.h>
#include <Modloader/app/structs/ErrorMessageController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ErrorMessageController {
        inline app::ErrorMessageController__Class** type_info() {
            static app::ErrorMessageController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ErrorMessageController__Class**)(modloader::win::memory::resolve_rva(0x04735020));
            }
            return cache;
        }
        inline app::ErrorMessageController__Class* get_class() {
            return il2cpp::get_class<app::ErrorMessageController__Class>(type_info(), "", "ErrorMessageController");
        }
        inline app::ErrorMessageController* create() {
            return il2cpp::create_object<app::ErrorMessageController>(get_class());
        }
    } // namespace ErrorMessageController
} // namespace app::classes::types
