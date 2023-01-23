#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MusicAction__Class.h>
#include <Modloader/app/structs/MusicAction.h>

namespace app::classes::types {
    namespace MusicAction {
        namespace {
            inline app::MusicAction__Class* type_info_ref = nullptr;
        }
        inline app::MusicAction__Class** type_info = &type_info_ref;
        inline app::MusicAction__Class* get_class() {
            return il2cpp::get_class<app::MusicAction__Class>(type_info, "", "MusicAction");
        }
        inline app::MusicAction* create() {
            return il2cpp::create_object<app::MusicAction>(get_class());
        }
    } // namespace MusicAction
} // namespace app::classes::types
