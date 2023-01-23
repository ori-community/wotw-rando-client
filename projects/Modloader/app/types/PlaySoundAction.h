#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlaySoundAction__Class.h>
#include <Modloader/app/structs/PlaySoundAction.h>

namespace app::classes::types {
    namespace PlaySoundAction {
        namespace {
            inline app::PlaySoundAction__Class* type_info_ref = nullptr;
        }
        inline app::PlaySoundAction__Class** type_info = &type_info_ref;
        inline app::PlaySoundAction__Class* get_class() {
            return il2cpp::get_class<app::PlaySoundAction__Class>(type_info, "", "PlaySoundAction");
        }
        inline app::PlaySoundAction* create() {
            return il2cpp::create_object<app::PlaySoundAction>(get_class());
        }
    } // namespace PlaySoundAction
} // namespace app::classes::types
