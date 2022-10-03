#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CanSkipCutsceneCondition {
        namespace {
            app::CanSkipCutsceneCondition__Class* type_info_ref = nullptr;
        }
        app::CanSkipCutsceneCondition__Class** type_info = &type_info_ref;
        inline app::CanSkipCutsceneCondition__Class* get_class() {
            return il2cpp::get_class<app::CanSkipCutsceneCondition__Class>(type_info, "", "CanSkipCutsceneCondition");
        }
        inline app::CanSkipCutsceneCondition* create() {
            return il2cpp::create_object<app::CanSkipCutsceneCondition>(get_class());
        }
    } // namespace CanSkipCutsceneCondition
} // namespace app::classes::types
