#pragma once
#include <Modloader/app/structs/CutsceneTrigger.h>
#include <Modloader/app/structs/CutsceneTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CutsceneTrigger {
        inline app::CutsceneTrigger__Class** type_info() {
            static app::CutsceneTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CutsceneTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CutsceneTrigger__Class* get_class() {
            return il2cpp::get_class<app::CutsceneTrigger__Class>(type_info(), "", "CutsceneTrigger");
        }
        inline app::CutsceneTrigger* create() {
            return il2cpp::create_object<app::CutsceneTrigger>(get_class());
        }
    } // namespace CutsceneTrigger
} // namespace app::classes::types
