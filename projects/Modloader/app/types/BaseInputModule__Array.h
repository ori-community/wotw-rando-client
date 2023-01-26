#pragma once
#include <Modloader/app/structs/BaseInputModule__Array.h>
#include <Modloader/app/structs/BaseInputModule__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseInputModule__Array {
        inline app::BaseInputModule__Array__Class** type_info() {
            static app::BaseInputModule__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BaseInputModule__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BaseInputModule__Array__Class* get_class() {
            return il2cpp::get_class<app::BaseInputModule__Array__Class>(type_info(), "UnityEngine.EventSystems", "BaseInputModule[]");
        }
        inline app::BaseInputModule__Array* create() {
            return il2cpp::create_object<app::BaseInputModule__Array>(get_class());
        }
    } // namespace BaseInputModule__Array
} // namespace app::classes::types
