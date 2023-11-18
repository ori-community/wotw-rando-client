#pragma once
#include <Modloader/app/structs/GameplaySoundManager.h>
#include <Modloader/app/structs/GameplaySoundManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameplaySoundManager {
        inline app::GameplaySoundManager__Class** type_info() {
            static app::GameplaySoundManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GameplaySoundManager__Class**)(modloader::win::memory::resolve_rva(0x0473B560));
            }
            return cache;
        }
        inline app::GameplaySoundManager__Class* get_class() {
            return il2cpp::get_class<app::GameplaySoundManager__Class>(type_info(), "", "GameplaySoundManager");
        }
        inline app::GameplaySoundManager* create() {
            return il2cpp::create_object<app::GameplaySoundManager>(get_class());
        }
    } // namespace GameplaySoundManager
} // namespace app::classes::types
