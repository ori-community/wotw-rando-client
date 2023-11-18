#pragma once
#include <Modloader/app/structs/MortarCreep.h>
#include <Modloader/app/structs/MortarCreep__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarCreep {
        inline app::MortarCreep__Class** type_info() {
            static app::MortarCreep__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MortarCreep__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MortarCreep__Class* get_class() {
            return il2cpp::get_class<app::MortarCreep__Class>(type_info(), "", "MortarCreep");
        }
        inline app::MortarCreep* create() {
            return il2cpp::create_object<app::MortarCreep>(get_class());
        }
    } // namespace MortarCreep
} // namespace app::classes::types
