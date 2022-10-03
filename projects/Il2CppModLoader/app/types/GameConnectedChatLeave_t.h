#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameConnectedChatLeave_t {
        namespace {
            app::GameConnectedChatLeave_t__Class* type_info_ref = nullptr;
        }
        app::GameConnectedChatLeave_t__Class** type_info = &type_info_ref;
        inline app::GameConnectedChatLeave_t__Class* get_class() {
            return il2cpp::get_class<app::GameConnectedChatLeave_t__Class>(type_info, "Steamworks", "GameConnectedChatLeave_t");
        }
        inline app::GameConnectedChatLeave_t* create() {
            return il2cpp::create_object<app::GameConnectedChatLeave_t>(get_class());
        }
        inline app::GameConnectedChatLeave_t__Boxed* box(app::GameConnectedChatLeave_t value) {
            return il2cpp::box_value<app::GameConnectedChatLeave_t__Boxed>(get_class(), value);
        }
    } // namespace GameConnectedChatLeave_t
} // namespace app::classes::types
