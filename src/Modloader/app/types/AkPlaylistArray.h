#pragma once
#include <Modloader/app/structs/AkPlaylistArray.h>
#include <Modloader/app/structs/AkPlaylistArray__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkPlaylistArray {
        inline app::AkPlaylistArray__Class** type_info() {
            static app::AkPlaylistArray__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkPlaylistArray__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkPlaylistArray__Class* get_class() {
            return il2cpp::get_class<app::AkPlaylistArray__Class>(type_info(), "", "AkPlaylistArray");
        }
        inline app::AkPlaylistArray* create() {
            return il2cpp::create_object<app::AkPlaylistArray>(get_class());
        }
    } // namespace AkPlaylistArray
} // namespace app::classes::types
