#pragma once
#include <Modloader/app/structs/UnreadChatMessagesChanged_t.h>
#include <Modloader/app/structs/UnreadChatMessagesChanged_t__Boxed.h>
#include <Modloader/app/structs/UnreadChatMessagesChanged_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnreadChatMessagesChanged_t {
        inline app::UnreadChatMessagesChanged_t__Class** type_info() {
            static app::UnreadChatMessagesChanged_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnreadChatMessagesChanged_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnreadChatMessagesChanged_t__Class* get_class() {
            return il2cpp::get_class<app::UnreadChatMessagesChanged_t__Class>(type_info(), "Steamworks", "UnreadChatMessagesChanged_t");
        }
        inline app::UnreadChatMessagesChanged_t* create() {
            return il2cpp::create_object<app::UnreadChatMessagesChanged_t>(get_class());
        }
        inline app::UnreadChatMessagesChanged_t__Boxed* box(app::UnreadChatMessagesChanged_t value) {
            return il2cpp::box_value<app::UnreadChatMessagesChanged_t__Boxed>(get_class(), value);
        }
    } // namespace UnreadChatMessagesChanged_t
} // namespace app::classes::types
