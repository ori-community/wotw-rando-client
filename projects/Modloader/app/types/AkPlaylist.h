#pragma once
#include <Modloader/app/structs/AkPlaylist.h>
#include <Modloader/app/structs/AkPlaylist__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkPlaylist {
        inline app::AkPlaylist__Class** type_info() {
            static app::AkPlaylist__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkPlaylist__Class**)(modloader::win::memory::resolve_rva(0x04724CB0));
            }
            return cache;
        }
        inline app::AkPlaylist__Class* get_class() {
            return il2cpp::get_class<app::AkPlaylist__Class>(type_info(), "", "AkPlaylist");
        }
        inline app::AkPlaylist* create() {
            return il2cpp::create_object<app::AkPlaylist>(get_class());
        }
    } // namespace AkPlaylist
} // namespace app::classes::types
