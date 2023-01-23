#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MultiplatformVideoPlayerAction__Class.h>
#include <Modloader/app/structs/MultiplatformVideoPlayerAction.h>

namespace app::classes::types {
    namespace MultiplatformVideoPlayerAction {
        namespace {
            inline app::MultiplatformVideoPlayerAction__Class* type_info_ref = nullptr;
        }
        inline app::MultiplatformVideoPlayerAction__Class** type_info = &type_info_ref;
        inline app::MultiplatformVideoPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::MultiplatformVideoPlayerAction__Class>(type_info, "", "MultiplatformVideoPlayerAction");
        }
        inline app::MultiplatformVideoPlayerAction* create() {
            return il2cpp::create_object<app::MultiplatformVideoPlayerAction>(get_class());
        }
    } // namespace MultiplatformVideoPlayerAction
} // namespace app::classes::types
