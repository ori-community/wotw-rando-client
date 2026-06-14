#pragma once
#include <Modloader/app/structs/Music.h>
#include <Modloader/app/structs/Music__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Music {
        inline app::Music__Class** type_info() {
            static app::Music__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Music__Class**)(modloader::win::memory::resolve_rva(0x04764C10));
            }
            return cache;
        }
        inline app::Music__Class* get_class() {
            return il2cpp::get_class<app::Music__Class>(type_info(), "Core", "Music");
        }
        inline app::Music* create() {
            return il2cpp::create_object<app::Music>(get_class());
        }
    } // namespace Music
} // namespace app::classes::types
