#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PushPullBlockOneWayHandler__Class.h>
#include <Modloader/app/structs/PushPullBlockOneWayHandler.h>

namespace app::classes::types {
    namespace PushPullBlockOneWayHandler {
        namespace {
            inline app::PushPullBlockOneWayHandler__Class* type_info_ref = nullptr;
        }
        inline app::PushPullBlockOneWayHandler__Class** type_info = &type_info_ref;
        inline app::PushPullBlockOneWayHandler__Class* get_class() {
            return il2cpp::get_class<app::PushPullBlockOneWayHandler__Class>(type_info, "", "PushPullBlockOneWayHandler");
        }
        inline app::PushPullBlockOneWayHandler* create() {
            return il2cpp::create_object<app::PushPullBlockOneWayHandler>(get_class());
        }
    } // namespace PushPullBlockOneWayHandler
} // namespace app::classes::types
