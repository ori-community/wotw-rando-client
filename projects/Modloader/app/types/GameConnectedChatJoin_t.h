#pragma once
#include <Modloader/app/structs/GameConnectedChatJoin_t.h>
#include <Modloader/app/structs/GameConnectedChatJoin_t__Boxed.h>
#include <Modloader/app/structs/GameConnectedChatJoin_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameConnectedChatJoin_t {
        inline app::GameConnectedChatJoin_t__Class** type_info() {
            static app::GameConnectedChatJoin_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameConnectedChatJoin_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameConnectedChatJoin_t__Class* get_class() {
            return il2cpp::get_class<app::GameConnectedChatJoin_t__Class>(type_info(), "Steamworks", "GameConnectedChatJoin_t");
        }
        inline app::GameConnectedChatJoin_t* create() {
            return il2cpp::create_object<app::GameConnectedChatJoin_t>(get_class());
        }
        inline app::GameConnectedChatJoin_t__Boxed* box(app::GameConnectedChatJoin_t value) {
            return il2cpp::box_value<app::GameConnectedChatJoin_t__Boxed>(get_class(), value);
        }
    } // namespace GameConnectedChatJoin_t
} // namespace app::classes::types
