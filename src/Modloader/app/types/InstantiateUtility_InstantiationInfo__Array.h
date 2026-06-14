#pragma once
#include <Modloader/app/structs/InstantiateUtility_InstantiationInfo__Array.h>
#include <Modloader/app/structs/InstantiateUtility_InstantiationInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InstantiateUtility_InstantiationInfo__Array {
        inline app::InstantiateUtility_InstantiationInfo__Array__Class** type_info() {
            static app::InstantiateUtility_InstantiationInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InstantiateUtility_InstantiationInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InstantiateUtility_InstantiationInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::InstantiateUtility_InstantiationInfo__Array__Class>(type_info(), "", "InstantiateUtility+InstantiationInfo[]");
        }
        inline app::InstantiateUtility_InstantiationInfo__Array* create() {
            return il2cpp::create_object<app::InstantiateUtility_InstantiationInfo__Array>(get_class());
        }
    } // namespace InstantiateUtility_InstantiationInfo__Array
} // namespace app::classes::types
