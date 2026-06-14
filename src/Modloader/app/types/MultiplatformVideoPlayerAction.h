#pragma once
#include <Modloader/app/structs/MultiplatformVideoPlayerAction.h>
#include <Modloader/app/structs/MultiplatformVideoPlayerAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MultiplatformVideoPlayerAction {
        inline app::MultiplatformVideoPlayerAction__Class** type_info() {
            static app::MultiplatformVideoPlayerAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MultiplatformVideoPlayerAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MultiplatformVideoPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::MultiplatformVideoPlayerAction__Class>(type_info(), "", "MultiplatformVideoPlayerAction");
        }
        inline app::MultiplatformVideoPlayerAction* create() {
            return il2cpp::create_object<app::MultiplatformVideoPlayerAction>(get_class());
        }
    } // namespace MultiplatformVideoPlayerAction
} // namespace app::classes::types
