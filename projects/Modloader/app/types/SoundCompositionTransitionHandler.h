#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoundCompositionTransitionHandler__Class.h>
#include <Modloader/app/structs/SoundCompositionTransitionHandler.h>

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
