#pragma once
#include <Modloader/app/structs/WindupSwitch.h>
#include <Modloader/app/structs/WindupSwitch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindupSwitch {
        inline app::WindupSwitch__Class** type_info() {
            static app::WindupSwitch__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindupSwitch__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindupSwitch__Class* get_class() {
            return il2cpp::get_class<app::WindupSwitch__Class>(type_info(), "", "WindupSwitch");
        }
        inline app::WindupSwitch* create() {
            return il2cpp::create_object<app::WindupSwitch>(get_class());
        }
    } // namespace WindupSwitch
} // namespace app::classes::types
