#pragma once
#include <Modloader/app/structs/CameraSizeConstraint.h>
#include <Modloader/app/structs/CameraSizeConstraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSizeConstraint {
        inline app::CameraSizeConstraint__Class** type_info() {
            static app::CameraSizeConstraint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraSizeConstraint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraSizeConstraint__Class* get_class() {
            return il2cpp::get_class<app::CameraSizeConstraint__Class>(type_info(), "", "CameraSizeConstraint");
        }
        inline app::CameraSizeConstraint* create() {
            return il2cpp::create_object<app::CameraSizeConstraint>(get_class());
        }
    } // namespace CameraSizeConstraint
} // namespace app::classes::types
