#pragma once
#include <Modloader/app/structs/DrivenZRotation_RefStatus__Enum.h>
#include <Modloader/app/structs/DrivenZRotation_RefStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrivenZRotation_RefStatus__Enum {
        inline app::DrivenZRotation_RefStatus__Enum__Class** type_info() {
            static app::DrivenZRotation_RefStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrivenZRotation_RefStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrivenZRotation_RefStatus__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DrivenZRotation_RefStatus__Enum__Class>(type_info(), "Moon", "DrivenZRotation", "RefStatus");
        }
        inline app::DrivenZRotation_RefStatus__Enum* create() {
            return il2cpp::create_object<app::DrivenZRotation_RefStatus__Enum>(get_class());
        }
    } // namespace DrivenZRotation_RefStatus__Enum
} // namespace app::classes::types
