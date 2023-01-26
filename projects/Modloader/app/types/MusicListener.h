#pragma once
#include <Modloader/app/structs/MusicListener.h>
#include <Modloader/app/structs/MusicListener__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicListener {
        inline app::MusicListener__Class** type_info() {
            static app::MusicListener__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MusicListener__Class**)(modloader::win::memory::resolve_rva(0x047055B0));
            }
            return cache;
        }
        inline app::MusicListener__Class* get_class() {
            return il2cpp::get_class<app::MusicListener__Class>(type_info(), "", "MusicListener");
        }
        inline app::MusicListener* create() {
            return il2cpp::create_object<app::MusicListener>(get_class());
        }
    } // namespace MusicListener
} // namespace app::classes::types
