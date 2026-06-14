#pragma once
#include <Modloader/app/structs/PetrifiedOwlBossLavaController_LaveDesiredState__Enum.h>
#include <Modloader/app/structs/PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PetrifiedOwlBossLavaController_LaveDesiredState__Enum {
        inline app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Class** type_info() {
            static app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum__Class>(type_info(), "", "PetrifiedOwlBossLavaController", "LaveDesiredState");
        }
        inline app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum* create() {
            return il2cpp::create_object<app::PetrifiedOwlBossLavaController_LaveDesiredState__Enum>(get_class());
        }
    } // namespace PetrifiedOwlBossLavaController_LaveDesiredState__Enum
} // namespace app::classes::types
