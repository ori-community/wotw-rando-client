#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SetMusicAction {
        namespace {
            inline app::SetMusicAction__Class* type_info_ref = nullptr;
        }
        inline app::SetMusicAction__Class** type_info = &type_info_ref;
        inline app::SetMusicAction__Class* get_class() {
            return il2cpp::get_class<app::SetMusicAction__Class>(type_info, "", "SetMusicAction");
        }
        inline app::SetMusicAction* create() {
            return il2cpp::create_object<app::SetMusicAction>(get_class());
        }
    } // namespace SetMusicAction
} // namespace app::classes::types
