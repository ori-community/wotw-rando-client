#pragma once
#include <Modloader/app/structs/InstantiateUtility_InstantiateInfo.h>
#include <Modloader/app/structs/InstantiateUtility_InstantiateInfo__Boxed.h>
#include <Modloader/app/structs/InstantiateUtility_InstantiateInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateUtility_InstantiateInfo {
        inline app::InstantiateUtility_InstantiateInfo__Class** type_info() {
            static app::InstantiateUtility_InstantiateInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstantiateUtility_InstantiateInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstantiateUtility_InstantiateInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateUtility_InstantiateInfo__Class>(type_info(), "", "InstantiateUtility", "InstantiateInfo");
        }
        inline app::InstantiateUtility_InstantiateInfo* create() {
            return il2cpp::create_object<app::InstantiateUtility_InstantiateInfo>(get_class());
        }
        inline app::InstantiateUtility_InstantiateInfo__Boxed* box(app::InstantiateUtility_InstantiateInfo value) {
            return il2cpp::box_value<app::InstantiateUtility_InstantiateInfo__Boxed>(get_class(), value);
        }
    } // namespace InstantiateUtility_InstantiateInfo
} // namespace app::classes::types
