#pragma once
#include <Modloader/app/structs/TreeData.h>
#include <Modloader/app/structs/TreeData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TreeData {
        inline app::TreeData__Class** type_info() {
            static app::TreeData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TreeData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TreeData__Class* get_class() {
            return il2cpp::get_class<app::TreeData__Class>(type_info(), "Moon.BehaviourSystem.BTEditor", "TreeData");
        }
        inline app::TreeData* create() {
            return il2cpp::create_object<app::TreeData>(get_class());
        }
    } // namespace TreeData
} // namespace app::classes::types
