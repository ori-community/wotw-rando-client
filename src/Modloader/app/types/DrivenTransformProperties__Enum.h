#pragma once
#include <Modloader/app/structs/DrivenTransformProperties__Enum.h>
#include <Modloader/app/structs/DrivenTransformProperties__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DrivenTransformProperties__Enum {
        inline app::DrivenTransformProperties__Enum__Class** type_info() {
            static app::DrivenTransformProperties__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DrivenTransformProperties__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DrivenTransformProperties__Enum__Class* get_class() {
            return il2cpp::get_class<app::DrivenTransformProperties__Enum__Class>(type_info(), "UnityEngine", "DrivenTransformProperties");
        }
        inline app::DrivenTransformProperties__Enum* create() {
            return il2cpp::create_object<app::DrivenTransformProperties__Enum>(get_class());
        }
    } // namespace DrivenTransformProperties__Enum
} // namespace app::classes::types
