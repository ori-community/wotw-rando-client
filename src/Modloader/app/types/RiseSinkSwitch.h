#pragma once
#include <Modloader/app/structs/RiseSinkSwitch.h>
#include <Modloader/app/structs/RiseSinkSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RiseSinkSwitch {
        inline app::RiseSinkSwitch__Class** type_info() {
            static app::RiseSinkSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RiseSinkSwitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RiseSinkSwitch__Class* get_class() {
            return il2cpp::get_class<app::RiseSinkSwitch__Class>(type_info(), "", "RiseSinkSwitch");
        }
        inline app::RiseSinkSwitch* create() {
            return il2cpp::create_object<app::RiseSinkSwitch>(get_class());
        }
    } // namespace RiseSinkSwitch
} // namespace app::classes::types
