#pragma once
#include <Modloader/app/structs/LobbyChatUpdate_t.h>
#include <Modloader/app/structs/LobbyChatUpdate_t__Boxed.h>
#include <Modloader/app/structs/LobbyChatUpdate_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LobbyChatUpdate_t {
        inline app::LobbyChatUpdate_t__Class** type_info() {
            static app::LobbyChatUpdate_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LobbyChatUpdate_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LobbyChatUpdate_t__Class* get_class() {
            return il2cpp::get_class<app::LobbyChatUpdate_t__Class>(type_info(), "Steamworks", "LobbyChatUpdate_t");
        }
        inline app::LobbyChatUpdate_t* create() {
            return il2cpp::create_object<app::LobbyChatUpdate_t>(get_class());
        }
        inline app::LobbyChatUpdate_t__Boxed* box(app::LobbyChatUpdate_t value) {
            return il2cpp::box_value<app::LobbyChatUpdate_t__Boxed>(get_class(), value);
        }
    } // namespace LobbyChatUpdate_t
} // namespace app::classes::types
