#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameConnectedChatJoin_t {
        namespace {
            inline app::GameConnectedChatJoin_t__Class* type_info_ref = nullptr;
        }
        inline app::GameConnectedChatJoin_t__Class** type_info = &type_info_ref;
        inline app::GameConnectedChatJoin_t__Class* get_class() {
            return il2cpp::get_class<app::GameConnectedChatJoin_t__Class>(type_info, "Steamworks", "GameConnectedChatJoin_t");
        }
        inline app::GameConnectedChatJoin_t* create() {
            return il2cpp::create_object<app::GameConnectedChatJoin_t>(get_class());
        }
        inline app::GameConnectedChatJoin_t__Boxed* box(app::GameConnectedChatJoin_t value) {
            return il2cpp::box_value<app::GameConnectedChatJoin_t__Boxed>(get_class(), value);
        }
    } // namespace GameConnectedChatJoin_t
} // namespace app::classes::types
