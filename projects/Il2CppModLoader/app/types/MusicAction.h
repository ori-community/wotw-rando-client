#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MusicAction {
        namespace {
            app::MusicAction__Class* type_info_ref = nullptr;
        }
        app::MusicAction__Class** type_info = &type_info_ref;
        inline app::MusicAction__Class* get_class() {
            return il2cpp::get_class<app::MusicAction__Class>(type_info, "", "MusicAction");
        }
        inline app::MusicAction* create() {
            return il2cpp::create_object<app::MusicAction>(get_class());
        }
    } // namespace MusicAction
} // namespace app::classes::types
