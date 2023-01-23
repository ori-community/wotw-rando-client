#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SoundAction__Class.h>
#include <Modloader/app/structs/SoundAction.h>

namespace app::classes::types {
    namespace SoundAction {
        namespace {
            inline app::SoundAction__Class* type_info_ref = nullptr;
        }
        inline app::SoundAction__Class** type_info = &type_info_ref;
        inline app::SoundAction__Class* get_class() {
            return il2cpp::get_class<app::SoundAction__Class>(type_info, "", "SoundAction");
        }
        inline app::SoundAction* create() {
            return il2cpp::create_object<app::SoundAction>(get_class());
        }
    } // namespace SoundAction
} // namespace app::classes::types
