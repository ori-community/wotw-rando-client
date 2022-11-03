#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MusicListener {
        inline app::MusicListener__Class** type_info = (app::MusicListener__Class**)(modloader::win::memory::resolve_rva(0x047055B0));
        inline app::MusicListener__Class* get_class() {
            return il2cpp::get_class<app::MusicListener__Class>(type_info, "", "MusicListener");
        }
        inline app::MusicListener* create() {
            return il2cpp::create_object<app::MusicListener>(get_class());
        }
    } // namespace MusicListener
} // namespace app::classes::types
