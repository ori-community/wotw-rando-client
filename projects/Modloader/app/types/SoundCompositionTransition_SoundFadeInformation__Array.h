#pragma once
#include <Modloader/app/structs/SoundCompositionTransition_SoundFadeInformation__Array.h>
#include <Modloader/app/structs/SoundCompositionTransition_SoundFadeInformation__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundCompositionTransition_SoundFadeInformation__Array {
        inline app::SoundCompositionTransition_SoundFadeInformation__Array__Class** type_info() {
            static app::SoundCompositionTransition_SoundFadeInformation__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundCompositionTransition_SoundFadeInformation__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundCompositionTransition_SoundFadeInformation__Array__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionTransition_SoundFadeInformation__Array__Class>(type_info(), "", "SoundCompositionTransition+SoundFadeInformation[]");
        }
        inline app::SoundCompositionTransition_SoundFadeInformation__Array* create() {
            return il2cpp::create_object<app::SoundCompositionTransition_SoundFadeInformation__Array>(get_class());
        }
    } // namespace SoundCompositionTransition_SoundFadeInformation__Array
} // namespace app::classes::types
