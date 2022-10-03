#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultiplatformVideoPlayerAction {
        namespace {
            app::MultiplatformVideoPlayerAction__Class* type_info_ref = nullptr;
        }
        app::MultiplatformVideoPlayerAction__Class** type_info = &type_info_ref;
        inline app::MultiplatformVideoPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::MultiplatformVideoPlayerAction__Class>(type_info, "", "MultiplatformVideoPlayerAction");
        }
        inline app::MultiplatformVideoPlayerAction* create() {
            return il2cpp::create_object<app::MultiplatformVideoPlayerAction>(get_class());
        }
    } // namespace MultiplatformVideoPlayerAction
} // namespace app::classes::types
