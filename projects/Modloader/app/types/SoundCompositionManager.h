#pragma once
#include <Modloader/app/structs/SoundCompositionManager.h>
#include <Modloader/app/structs/SoundCompositionManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundCompositionManager {
        inline app::SoundCompositionManager__Class** type_info() {
            static app::SoundCompositionManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundCompositionManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundCompositionManager__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionManager__Class>(type_info(), "", "SoundCompositionManager");
        }
        inline app::SoundCompositionManager* create() {
            return il2cpp::create_object<app::SoundCompositionManager>(get_class());
        }
    } // namespace SoundCompositionManager
} // namespace app::classes::types
