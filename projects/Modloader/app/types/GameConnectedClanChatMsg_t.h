#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameConnectedClanChatMsg_t__Class.h>
#include <Modloader/app/structs/GameConnectedClanChatMsg_t.h>
#include <Modloader/app/structs/GameConnectedClanChatMsg_t__Boxed.h>

namespace app::classes::types {
    namespace GameConnectedClanChatMsg_t {
        namespace {
            inline app::GameConnectedClanChatMsg_t__Class* type_info_ref = nullptr;
        }
        inline app::GameConnectedClanChatMsg_t__Class** type_info = &type_info_ref;
        inline app::GameConnectedClanChatMsg_t__Class* get_class() {
            return il2cpp::get_class<app::GameConnectedClanChatMsg_t__Class>(type_info, "Steamworks", "GameConnectedClanChatMsg_t");
        }
        inline app::GameConnectedClanChatMsg_t* create() {
            return il2cpp::create_object<app::GameConnectedClanChatMsg_t>(get_class());
        }
        inline app::GameConnectedClanChatMsg_t__Boxed* box(app::GameConnectedClanChatMsg_t value) {
            return il2cpp::box_value<app::GameConnectedClanChatMsg_t__Boxed>(get_class(), value);
        }
    } // namespace GameConnectedClanChatMsg_t
} // namespace app::classes::types
