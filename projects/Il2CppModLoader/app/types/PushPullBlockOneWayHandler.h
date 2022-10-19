#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

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
