#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CutsceneTrigger {
        namespace {
            inline app::CutsceneTrigger__Class* type_info_ref = nullptr;
        }
        inline app::CutsceneTrigger__Class** type_info = &type_info_ref;
        inline app::CutsceneTrigger__Class* get_class() {
            return il2cpp::get_class<app::CutsceneTrigger__Class>(type_info, "", "CutsceneTrigger");
        }
        inline app::CutsceneTrigger* create() {
            return il2cpp::create_object<app::CutsceneTrigger>(get_class());
        }
    } // namespace CutsceneTrigger
} // namespace app::classes::types
