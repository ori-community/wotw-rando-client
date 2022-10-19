#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundCompositionTransitionHandler {
        namespace {
            inline app::SoundCompositionTransitionHandler__Class* type_info_ref = nullptr;
        }
        inline app::SoundCompositionTransitionHandler__Class** type_info = &type_info_ref;
        inline app::SoundCompositionTransitionHandler__Class* get_class() {
            return il2cpp::get_class<app::SoundCompositionTransitionHandler__Class>(type_info, "", "SoundCompositionTransitionHandler");
        }
        inline app::SoundCompositionTransitionHandler* create() {
            return il2cpp::create_object<app::SoundCompositionTransitionHandler>(get_class());
        }
    } // namespace SoundCompositionTransitionHandler
} // namespace app::classes::types
