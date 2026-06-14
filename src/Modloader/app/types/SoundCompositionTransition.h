#pragma once
#include <Modloader/app/structs/SoundCompositionTransition.h>
#include <Modloader/app/structs/SoundCompositionTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundCompositionTransition {
        inline app::SoundCompositionTransition__Class** type_info() {
            static app::SoundCompositionTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundCompositionTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundCompositionTransition__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionTransition__Class>(type_info(), "", "SoundCompositionTransition");
        }
        inline app::SoundCompositionTransition* create() {
            return il2cpp::create_object<app::SoundCompositionTransition>(get_class());
        }
    } // namespace SoundCompositionTransition
} // namespace app::classes::types
