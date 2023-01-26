#pragma once
#include <Modloader/app/structs/Events_1.h>
#include <Modloader/app/structs/Events_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Events_1 {
        inline app::Events_1__Class** type_info() {
            static app::Events_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Events_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Events_1__Class* get_class() {
            return il2cpp::get_class<app::Events_1__Class>(type_info(), "Game", "Events");
        }
        inline app::Events_1* create() {
            return il2cpp::create_object<app::Events_1>(get_class());
        }
    } // namespace Events_1
} // namespace app::classes::types
