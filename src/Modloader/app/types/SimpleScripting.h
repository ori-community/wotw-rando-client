#pragma once
#include <Modloader/app/structs/SimpleScripting.h>
#include <Modloader/app/structs/SimpleScripting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SimpleScripting {
        inline app::SimpleScripting__Class** type_info() {
            static app::SimpleScripting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SimpleScripting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SimpleScripting__Class* get_class() {
            return il2cpp::get_class<app::SimpleScripting__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "SimpleScripting");
        }
        inline app::SimpleScripting* create() {
            return il2cpp::create_object<app::SimpleScripting>(get_class());
        }
    } // namespace SimpleScripting
} // namespace app::classes::types
