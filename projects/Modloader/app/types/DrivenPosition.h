#pragma once
#include <Modloader/app/structs/DrivenPosition.h>
#include <Modloader/app/structs/DrivenPosition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrivenPosition {
        inline app::DrivenPosition__Class** type_info() {
            static app::DrivenPosition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrivenPosition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrivenPosition__Class* get_class() {
            return il2cpp::get_class<app::DrivenPosition__Class>(type_info(), "Moon", "DrivenPosition");
        }
        inline app::DrivenPosition* create() {
            return il2cpp::create_object<app::DrivenPosition>(get_class());
        }
    } // namespace DrivenPosition
} // namespace app::classes::types
