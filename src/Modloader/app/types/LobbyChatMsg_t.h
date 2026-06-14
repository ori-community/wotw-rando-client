#pragma once
#include <Modloader/app/structs/LobbyChatMsg_t.h>
#include <Modloader/app/structs/LobbyChatMsg_t__Boxed.h>
#include <Modloader/app/structs/LobbyChatMsg_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LobbyChatMsg_t {
        inline app::LobbyChatMsg_t__Class** type_info() {
            static app::LobbyChatMsg_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LobbyChatMsg_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LobbyChatMsg_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyChatMsg_t__Class>(type_info(), "Steamworks", "LobbyChatMsg_t");
        }
        inline app::LobbyChatMsg_t* create() {
            return il2cpp::create_object<app::LobbyChatMsg_t>(get_class());
        }
        inline app::LobbyChatMsg_t__Boxed* box(app::LobbyChatMsg_t value) {
            return il2cpp::box_value<app::LobbyChatMsg_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyChatMsg_t
} // namespace app::classes::types
