#pragma once
#include <Modloader/app/structs/RestartOneLifeMode.h>
#include <Modloader/app/structs/RestartOneLifeMode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RestartOneLifeMode {
        inline app::RestartOneLifeMode__Class** type_info() {
            static app::RestartOneLifeMode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RestartOneLifeMode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RestartOneLifeMode__Class* get_class() {
            return il2cpp::get_class<app::RestartOneLifeMode__Class>(type_info(), "", "RestartOneLifeMode");
        }
        inline app::RestartOneLifeMode* create() {
            return il2cpp::create_object<app::RestartOneLifeMode>(get_class());
        }
    } // namespace RestartOneLifeMode
} // namespace app::classes::types
