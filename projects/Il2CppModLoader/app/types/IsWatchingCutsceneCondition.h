#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsWatchingCutsceneCondition {
        namespace {
            app::IsWatchingCutsceneCondition__Class* type_info_ref = nullptr;
        }
        app::IsWatchingCutsceneCondition__Class** type_info = &type_info_ref;
        inline app::IsWatchingCutsceneCondition__Class* get_class() {
            return il2cpp::get_class<app::IsWatchingCutsceneCondition__Class>(type_info, "", "IsWatchingCutsceneCondition");
        }
        inline app::IsWatchingCutsceneCondition* create() {
            return il2cpp::create_object<app::IsWatchingCutsceneCondition>(get_class());
        }
    } // namespace IsWatchingCutsceneCondition
} // namespace app::classes::types
