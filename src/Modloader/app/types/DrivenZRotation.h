#pragma once
#include <Modloader/app/structs/DrivenZRotation.h>
#include <Modloader/app/structs/DrivenZRotation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrivenZRotation {
        inline app::DrivenZRotation__Class** type_info() {
            static app::DrivenZRotation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrivenZRotation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrivenZRotation__Class* get_class() {
            return il2cpp::get_class<app::DrivenZRotation__Class>(type_info(), "Moon", "DrivenZRotation");
        }
        inline app::DrivenZRotation* create() {
            return il2cpp::create_object<app::DrivenZRotation>(get_class());
        }
    } // namespace DrivenZRotation
} // namespace app::classes::types
