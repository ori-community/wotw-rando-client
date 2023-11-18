#pragma once
#include <Modloader/app/structs/SimpleController.h>
#include <Modloader/app/structs/SimpleController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleController {
        inline app::SimpleController__Class** type_info() {
            static app::SimpleController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleController__Class* get_class() {
            return il2cpp::get_class<app::SimpleController__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "SimpleController");
        }
        inline app::SimpleController* create() {
            return il2cpp::create_object<app::SimpleController>(get_class());
        }
    } // namespace SimpleController
} // namespace app::classes::types
