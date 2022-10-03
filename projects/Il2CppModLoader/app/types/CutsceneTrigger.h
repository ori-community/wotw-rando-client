#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CutsceneTrigger {
        namespace {
            app::CutsceneTrigger__Class* type_info_ref = nullptr;
        }
        app::CutsceneTrigger__Class** type_info = &type_info_ref;
        inline app::CutsceneTrigger__Class* get_class() {
            return il2cpp::get_class<app::CutsceneTrigger__Class>(type_info, "", "CutsceneTrigger");
        }
        inline app::CutsceneTrigger* create() {
            return il2cpp::create_object<app::CutsceneTrigger>(get_class());
        }
    } // namespace CutsceneTrigger
} // namespace app::classes::types
