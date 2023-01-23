#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SetSoundCompositionAction__Class.h>
#include <Modloader/app/structs/SetSoundCompositionAction.h>

namespace app::classes::types {
    namespace SetSoundCompositionAction {
        namespace {
            inline app::SetSoundCompositionAction__Class* type_info_ref = nullptr;
        }
        inline app::SetSoundCompositionAction__Class** type_info = &type_info_ref;
        inline app::SetSoundCompositionAction__Class* get_class() {
            return il2cpp::get_class<app::SetSoundCompositionAction__Class>(type_info, "", "SetSoundCompositionAction");
        }
        inline app::SetSoundCompositionAction* create() {
            return il2cpp::create_object<app::SetSoundCompositionAction>(get_class());
        }
    } // namespace SetSoundCompositionAction
} // namespace app::classes::types
