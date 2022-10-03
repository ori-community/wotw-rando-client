#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XboxOneVideoPlayer {
        namespace {
            app::XboxOneVideoPlayer__Class* type_info_ref = nullptr;
        }
        app::XboxOneVideoPlayer__Class** type_info = &type_info_ref;
        inline app::XboxOneVideoPlayer__Class* get_class() {
            return il2cpp::get_class<app::XboxOneVideoPlayer__Class>(type_info, "", "XboxOneVideoPlayer");
        }
        inline app::XboxOneVideoPlayer* create() {
            return il2cpp::create_object<app::XboxOneVideoPlayer>(get_class());
        }
    } // namespace XboxOneVideoPlayer
} // namespace app::classes::types
