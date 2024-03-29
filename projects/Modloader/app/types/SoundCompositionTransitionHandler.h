#pragma once
#include <Modloader/app/structs/SoundCompositionTransitionHandler.h>
#include <Modloader/app/structs/SoundCompositionTransitionHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundCompositionTransitionHandler {
        inline app::SoundCompositionTransitionHandler__Class** type_info() {
            static app::SoundCompositionTransitionHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundCompositionTransitionHandler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundCompositionTransitionHandler__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionTransitionHandler__Class>(type_info(), "", "SoundCompositionTransitionHandler");
        }
        inline app::SoundCompositionTransitionHandler* create() {
            return il2cpp::create_object<app::SoundCompositionTransitionHandler>(get_class());
        }
    } // namespace SoundCompositionTransitionHandler
} // namespace app::classes::types
