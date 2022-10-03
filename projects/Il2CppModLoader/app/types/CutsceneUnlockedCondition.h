#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CutsceneUnlockedCondition {
        namespace {
            app::CutsceneUnlockedCondition__Class* type_info_ref = nullptr;
        }
        app::CutsceneUnlockedCondition__Class** type_info = &type_info_ref;
        inline app::CutsceneUnlockedCondition__Class* get_class() {
            return il2cpp::get_class<app::CutsceneUnlockedCondition__Class>(type_info, "", "CutsceneUnlockedCondition");
        }
        inline app::CutsceneUnlockedCondition* create() {
            return il2cpp::create_object<app::CutsceneUnlockedCondition>(get_class());
        }
    } // namespace CutsceneUnlockedCondition
} // namespace app::classes::types
