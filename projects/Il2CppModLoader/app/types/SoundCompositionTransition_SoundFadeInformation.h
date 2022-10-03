#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundCompositionTransition_SoundFadeInformation {
        namespace {
            app::SoundCompositionTransition_SoundFadeInformation__Class* type_info_ref = nullptr;
        }
        app::SoundCompositionTransition_SoundFadeInformation__Class** type_info = &type_info_ref;
        inline app::SoundCompositionTransition_SoundFadeInformation__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundCompositionTransition_SoundFadeInformation__Class>(type_info, "", "SoundCompositionTransition", "SoundFadeInformation");
        }
        inline app::SoundCompositionTransition_SoundFadeInformation* create() {
            return il2cpp::create_object<app::SoundCompositionTransition_SoundFadeInformation>(get_class());
        }
        inline app::SoundCompositionTransition_SoundFadeInformation__Array* create_array(int size) {
            return il2cpp::array_new<app::SoundCompositionTransition_SoundFadeInformation__Array>(get_class(), size);
        }
    } // namespace SoundCompositionTransition_SoundFadeInformation
} // namespace app::classes::types
