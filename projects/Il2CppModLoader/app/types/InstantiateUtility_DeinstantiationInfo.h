#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiateUtility_DeinstantiationInfo {
        namespace {
            app::InstantiateUtility_DeinstantiationInfo__Class* type_info_ref = nullptr;
        }
        app::InstantiateUtility_DeinstantiationInfo__Class** type_info = &type_info_ref;
        inline app::InstantiateUtility_DeinstantiationInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiateUtility_DeinstantiationInfo__Class>(type_info, "", "InstantiateUtility", "DeinstantiationInfo");
        }
        inline app::InstantiateUtility_DeinstantiationInfo* create() {
            return il2cpp::create_object<app::InstantiateUtility_DeinstantiationInfo>(get_class());
        }
        inline app::InstantiateUtility_DeinstantiationInfo__Boxed* box(app::InstantiateUtility_DeinstantiationInfo value) {
            return il2cpp::box_value<app::InstantiateUtility_DeinstantiationInfo__Boxed>(get_class(), value);
        }
    } // namespace InstantiateUtility_DeinstantiationInfo
} // namespace app::classes::types
