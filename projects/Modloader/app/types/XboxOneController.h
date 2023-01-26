#pragma once
#include <Modloader/app/structs/XboxOneController.h>
#include <Modloader/app/structs/XboxOneController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxOneController {
        inline app::XboxOneController__Class** type_info() {
            static app::XboxOneController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxOneController__Class**)(modloader::win::memory::resolve_rva(0x04736508));
            }
            return cache;
        }
        inline app::XboxOneController__Class* get_class() {
            return il2cpp::get_class<app::XboxOneController__Class>(type_info(), "", "XboxOneController");
        }
        inline app::XboxOneController* create() {
            return il2cpp::create_object<app::XboxOneController>(get_class());
        }
    } // namespace XboxOneController
} // namespace app::classes::types
