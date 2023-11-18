#pragma once
#include <Modloader/app/structs/PushPullBlockOneWayHandler.h>
#include <Modloader/app/structs/PushPullBlockOneWayHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PushPullBlockOneWayHandler {
        inline app::PushPullBlockOneWayHandler__Class** type_info() {
            static app::PushPullBlockOneWayHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PushPullBlockOneWayHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PushPullBlockOneWayHandler__Class* get_class() {
            return il2cpp::get_class<app::PushPullBlockOneWayHandler__Class>(type_info(), "", "PushPullBlockOneWayHandler");
        }
        inline app::PushPullBlockOneWayHandler* create() {
            return il2cpp::create_object<app::PushPullBlockOneWayHandler>(get_class());
        }
    } // namespace PushPullBlockOneWayHandler
} // namespace app::classes::types
