#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLavaController_LaveDesiredState__Enum {
        namespace {
            inline app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Class** type_info = &type_info_ref;
        inline app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Class>(type_info, "", "PetrifiedOwlBossLavaController", "LaveDesiredState");
        }
        inline app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum>(get_class());
        }
    } // namespace PetrifiedOwlBossLavaController_LaveDesiredState__Enum
} // namespace app::classes::types
