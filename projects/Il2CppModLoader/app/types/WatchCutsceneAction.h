#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WatchCutsceneAction {
        namespace {
            inline app::WatchCutsceneAction__Class* type_info_ref = nullptr;
        }
        inline app::WatchCutsceneAction__Class** type_info = &type_info_ref;
        inline app::WatchCutsceneAction__Class* get_class() {
            return il2cpp::get_class<app::WatchCutsceneAction__Class>(type_info, "", "WatchCutsceneAction");
        }
        inline app::WatchCutsceneAction* create() {
            return il2cpp::create_object<app::WatchCutsceneAction>(get_class());
        }
    } // namespace WatchCutsceneAction
} // namespace app::classes::types
