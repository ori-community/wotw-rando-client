#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LobbyChatMsg_t {
        namespace {
            app::LobbyChatMsg_t__Class* type_info_ref = nullptr;
        }
        app::LobbyChatMsg_t__Class** type_info = &type_info_ref;
        inline app::LobbyChatMsg_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyChatMsg_t__Class>(type_info, "Steamworks", "LobbyChatMsg_t");
        }
        inline app::LobbyChatMsg_t* create() {
            return il2cpp::create_object<app::LobbyChatMsg_t>(get_class());
        }
        inline app::LobbyChatMsg_t__Boxed* box(app::LobbyChatMsg_t value) {
            return il2cpp::box_value<app::LobbyChatMsg_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyChatMsg_t
} // namespace app::classes::types
