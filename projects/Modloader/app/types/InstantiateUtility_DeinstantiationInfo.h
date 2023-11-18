#pragma once
#include <Modloader/app/structs/InstantiateUtility_DeinstantiationInfo.h>
#include <Modloader/app/structs/InstantiateUtility_DeinstantiationInfo__Boxed.h>
#include <Modloader/app/structs/InstantiateUtility_DeinstantiationInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateUtility_DeinstantiationInfo {
        inline app::InstantiateUtility_DeinstantiationInfo__Class** type_info() {
            static app::InstantiateUtility_DeinstantiationInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstantiateUtility_DeinstantiationInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstantiateUtility_DeinstantiationInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateUtility_DeinstantiationInfo__Class>(type_info(), "", "InstantiateUtility", "DeinstantiationInfo");
        }
        inline app::InstantiateUtility_DeinstantiationInfo* create() {
            return il2cpp::create_object<app::InstantiateUtility_DeinstantiationInfo>(get_class());
        }
        inline app::InstantiateUtility_DeinstantiationInfo__Boxed* box(app::InstantiateUtility_DeinstantiationInfo value) {
            return il2cpp::box_value<app::InstantiateUtility_DeinstantiationInfo__Boxed>(get_class(), value);
        }
    } // namespace InstantiateUtility_DeinstantiationInfo
} // namespace app::classes::types
