#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundCompositionTransition {
        namespace {
            inline app::SoundCompositionTransition__Class* type_info_ref = nullptr;
        }
        inline app::SoundCompositionTransition__Class** type_info = &type_info_ref;
        inline app::SoundCompositionTransition__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionTransition__Class>(type_info, "", "SoundCompositionTransition");
        }
        inline app::SoundCompositionTransition* create() {
            return il2cpp::create_object<app::SoundCompositionTransition>(get_class());
        }
    } // namespace SoundCompositionTransition
} // namespace app::classes::types
