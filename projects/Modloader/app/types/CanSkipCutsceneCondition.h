#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CanSkipCutsceneCondition__Class.h>
#include <Modloader/app/structs/CanSkipCutsceneCondition.h>

namespace app::classes::types {
    namespace CanSkipCutsceneCondition {
        namespace {
            inline app::CanSkipCutsceneCondition__Class* type_info_ref = nullptr;
        }
        inline app::CanSkipCutsceneCondition__Class** type_info = &type_info_ref;
        inline app::CanSkipCutsceneCondition__Class* get_class() {
            return il2cpp::get_class<app::CanSkipCutsceneCondition__Class>(type_info, "", "CanSkipCutsceneCondition");
        }
        inline app::CanSkipCutsceneCondition* create() {
            return il2cpp::create_object<app::CanSkipCutsceneCondition>(get_class());
        }
    } // namespace CanSkipCutsceneCondition
} // namespace app::classes::types
