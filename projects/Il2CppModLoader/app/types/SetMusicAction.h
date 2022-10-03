#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetMusicAction {
        namespace {
            app::SetMusicAction__Class* type_info_ref = nullptr;
        }
        app::SetMusicAction__Class** type_info = &type_info_ref;
        inline app::SetMusicAction__Class* get_class() {
            return il2cpp::get_class<app::SetMusicAction__Class>(type_info, "", "SetMusicAction");
        }
        inline app::SetMusicAction* create() {
            return il2cpp::create_object<app::SetMusicAction>(get_class());
        }
    } // namespace SetMusicAction
} // namespace app::classes::types
