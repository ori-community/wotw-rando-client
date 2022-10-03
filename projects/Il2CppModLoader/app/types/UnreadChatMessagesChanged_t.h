#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnreadChatMessagesChanged_t {
        namespace {
            app::UnreadChatMessagesChanged_t__Class* type_info_ref = nullptr;
        }
        app::UnreadChatMessagesChanged_t__Class** type_info = &type_info_ref;
        inline app::UnreadChatMessagesChanged_t__Class* get_class() {
            return il2cpp::get_class<app::UnreadChatMessagesChanged_t__Class>(type_info, "Steamworks", "UnreadChatMessagesChanged_t");
        }
        inline app::UnreadChatMessagesChanged_t* create() {
            return il2cpp::create_object<app::UnreadChatMessagesChanged_t>(get_class());
        }
        inline app::UnreadChatMessagesChanged_t__Boxed* box(app::UnreadChatMessagesChanged_t value) {
            return il2cpp::box_value<app::UnreadChatMessagesChanged_t__Boxed>(get_class(), value);
        }
    } // namespace UnreadChatMessagesChanged_t
} // namespace app::classes::types
