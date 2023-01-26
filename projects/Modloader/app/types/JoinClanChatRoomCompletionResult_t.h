#pragma once
#include <Modloader/app/structs/JoinClanChatRoomCompletionResult_t.h>
#include <Modloader/app/structs/JoinClanChatRoomCompletionResult_t__Boxed.h>
#include <Modloader/app/structs/JoinClanChatRoomCompletionResult_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JoinClanChatRoomCompletionResult_t {
        inline app::JoinClanChatRoomCompletionResult_t__Class** type_info() {
            static app::JoinClanChatRoomCompletionResult_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::JoinClanChatRoomCompletionResult_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::JoinClanChatRoomCompletionResult_t__Class* get_class() {
            return il2cpp::get_class<app::JoinClanChatRoomCompletionResult_t__Class>(type_info(), "Steamworks", "JoinClanChatRoomCompletionResult_t");
        }
        inline app::JoinClanChatRoomCompletionResult_t* create() {
            return il2cpp::create_object<app::JoinClanChatRoomCompletionResult_t>(get_class());
        }
        inline app::JoinClanChatRoomCompletionResult_t__Boxed* box(app::JoinClanChatRoomCompletionResult_t value) {
            return il2cpp::box_value<app::JoinClanChatRoomCompletionResult_t__Boxed>(get_class(), value);
        }
    } // namespace JoinClanChatRoomCompletionResult_t
} // namespace app::classes::types
