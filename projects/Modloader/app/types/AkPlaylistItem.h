#pragma once
#include <Modloader/app/structs/AkPlaylistItem.h>
#include <Modloader/app/structs/AkPlaylistItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkPlaylistItem {
        inline app::AkPlaylistItem__Class** type_info() {
            static app::AkPlaylistItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkPlaylistItem__Class**)(modloader::win::memory::resolve_rva(0x04712C90));
            }
            return cache;
        }
        inline app::AkPlaylistItem__Class* get_class() {
            return il2cpp::get_class<app::AkPlaylistItem__Class>(type_info(), "", "AkPlaylistItem");
        }
        inline app::AkPlaylistItem* create() {
            return il2cpp::create_object<app::AkPlaylistItem>(get_class());
        }
    } // namespace AkPlaylistItem
} // namespace app::classes::types
