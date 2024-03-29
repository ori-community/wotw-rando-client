#pragma once
#include <Modloader/app/structs/MusicPlayerRemoteToFront_t.h>
#include <Modloader/app/structs/MusicPlayerRemoteToFront_t__Boxed.h>
#include <Modloader/app/structs/MusicPlayerRemoteToFront_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicPlayerRemoteToFront_t {
        inline app::MusicPlayerRemoteToFront_t__Class** type_info() {
            static app::MusicPlayerRemoteToFront_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicPlayerRemoteToFront_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicPlayerRemoteToFront_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerRemoteToFront_t__Class>(type_info(), "Steamworks", "MusicPlayerRemoteToFront_t");
        }
        inline app::MusicPlayerRemoteToFront_t* create() {
            return il2cpp::create_object<app::MusicPlayerRemoteToFront_t>(get_class());
        }
        inline app::MusicPlayerRemoteToFront_t__Boxed* box(app::MusicPlayerRemoteToFront_t value) {
            return il2cpp::box_value<app::MusicPlayerRemoteToFront_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerRemoteToFront_t
} // namespace app::classes::types
