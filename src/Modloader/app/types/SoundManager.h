#pragma once
#include <Modloader/app/structs/SoundManager.h>
#include <Modloader/app/structs/SoundManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundManager {
        inline app::SoundManager__Class** type_info() {
            static app::SoundManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundManager__Class* get_class() {
            return il2cpp::get_class<app::SoundManager__Class>(type_info(), "", "SoundManager");
        }
        inline app::SoundManager* create() {
            return il2cpp::create_object<app::SoundManager>(get_class());
        }
    } // namespace SoundManager
} // namespace app::classes::types
