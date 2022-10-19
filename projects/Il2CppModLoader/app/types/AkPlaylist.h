#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkPlaylist {
        inline app::AkPlaylist__Class** type_info = (app::AkPlaylist__Class**)(modloader::win::memory::resolve_rva(0x04724CB0));
        inline app::AkPlaylist__Class* get_class() {
            return il2cpp::get_class<app::AkPlaylist__Class>(type_info, "", "AkPlaylist");
        }
        inline app::AkPlaylist* create() {
            return il2cpp::create_object<app::AkPlaylist>(get_class());
        }
    } // namespace AkPlaylist
} // namespace app::classes::types
