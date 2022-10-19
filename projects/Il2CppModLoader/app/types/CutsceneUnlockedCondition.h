#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CutsceneUnlockedCondition {
        namespace {
            inline app::CutsceneUnlockedCondition__Class* type_info_ref = nullptr;
        }
        inline app::CutsceneUnlockedCondition__Class** type_info = &type_info_ref;
        inline app::CutsceneUnlockedCondition__Class* get_class() {
            return il2cpp::get_class<app::CutsceneUnlockedCondition__Class>(type_info, "", "CutsceneUnlockedCondition");
        }
        inline app::CutsceneUnlockedCondition* create() {
            return il2cpp::create_object<app::CutsceneUnlockedCondition>(get_class());
        }
    } // namespace CutsceneUnlockedCondition
} // namespace app::classes::types
